#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)return "";
	sort(strs.begin(), strs.end(), [](string& a, string& b){return a.size() < b.size(); });
	for (int i = 1; i <=strs[0].size(); ++i)
	{
		for (int j = 1; j < strs.size(); ++j)
		{
			/*cout << strs[0].substr(0, i) << endl;
			cout << strs[j].substr(0, i) << endl;*/
			if (strs[0].substr(0, i) != strs[j].substr(0, i))return strs[0].substr(0, i - 1);
		}
	}
	return "";
}


string longestCommonPrefix_neater(vector<string>& strs) {
	if (strs.size() == 0)return "";
	string prefix = "";
	//sort(strs.begin(), strs.end(), [](string& a, string& b){return a.size() < b.size(); });
	for (int idx = 0; strs.size() > 0; prefix += strs[0][idx], idx++)
	{
		for (int i = 0; i < strs.size(); ++i)
		{
			if (idx >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i - 1][idx]))return prefix;
		}
	}
	return prefix;
}

string longest(vector<string>& strs)
{
	if (strs.size() == 0)return "";
	string prefix = "";
	int idx = 0;
	while (true)
	{
		prefix += strs[0][idx];
		for (int i = 0; i < strs.size(); ++i)
		{
			if (i >= strs[i].size() || (i > 0 && strs[i][idx] != strs[i - 1][idx]))return prefix;
		}
		idx++;
	}
	return prefix;
}