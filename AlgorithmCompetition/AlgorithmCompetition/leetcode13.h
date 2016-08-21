#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
int romanToInt(string s) {
	if (s.size() == 0)return 0;
	unordered_map<char, int>small_part;
	unordered_map<string, int>big_part;
	small_part['I'] = 1, small_part['V'] = 5, small_part['X'] = 10, small_part['L'] = 50, small_part['C'] = 100, small_part['D'] = 500, small_part['M'] = 1000;
	big_part["IV"] = 4, big_part["IX"] = 9, big_part["XL"] = 40, big_part["XC"] = 90, big_part["CD"] = 400, big_part["CM"] = 900;
	int res = 0, i = 0,length=s.size();
	while (i < length)
	{
		if (i<length-1 && big_part.count(s.substr(i, 2)))
		{
			res += big_part[s.substr(i, 2)];
			i += 2;
		}
		else
		{
			res += small_part[s[i]];
			i++ ;
		}
	}
	return res;
}

int romanToInt_neater(string s)
{
	unordered_map<char, int> mp = { { 'I',1 }, { 'V',5 }, { 'X',10 }, { 'L',50 }, { 'C',100 }, { 'D',500 }, { 'M',1000 } };
	int sum1 = mp[s.back()];
	for (int i = int(s.size()) - 2; i >= 0; --i)
	{
		sum1 += mp[s[i]] < mp[s[i + 1]] ? -mp[s[i]] : mp[s[i]];
	}
	return sum1;

}