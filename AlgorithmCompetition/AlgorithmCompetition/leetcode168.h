#include<string>
#include<unordered_map>
using namespace std;
string convertToTitle(int n) {
	unordered_map<int, char>mp;
	for (int i = 0; i <= 25; ++i)
	{
		mp[i] = char('A' + i );
	}
	string res = "";
	while (n)
	{
		res = mp[(n-1) % 26] + res;
		n = (n-1) / 26;
	}
	return res;
}


string convertToTitle1(int n)
{
	return n == 0 ? "" : convertToTitle1(n / 26) + (char)(--n % 26 + 'A');
}