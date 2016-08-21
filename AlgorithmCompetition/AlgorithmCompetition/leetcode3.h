#include<map>
#include<unordered_map>
#include<cstdlib>
#include<algorithm>
using namespace std;

#include<string>

int lengthOfLongestSubstring(string s)
{
	int res = 0, start = -1;
	map<char, int>mp;
	for (int i = 0; i < s.size(); ++i)
	{
		if (mp.count(s[i]) != 0)start = max(start, mp[s[i]]);
		mp[s[i]] = i;
		res = max(res, i - start);
	}
	return res;
}


int lengthOfLongestSubstring1(string s)
{
	int res = 0, start = -1;
	unordered_map<char, int>mp;
	for (int i = 0; i < s.size(); ++i)
	{
		if (mp.find(s[i]) != mp.end())start = max(start, mp[s[i]]);
		mp[s[i]] = i;
		res = max(res, i - start);
	}
	return res;
}
