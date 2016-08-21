#include"Header.h"
vector<vector<string>> groupAnagrams(vector<string>& strs) {
	vector<vector<string>>res;
	unordered_map<string, int>mp;
	vector<string>inner;
	int index = 0;
	string copy;
	for (string tmp : strs)
	{
		copy = tmp;
		sort(tmp.begin(), tmp.end());
		if (mp.find(tmp) == mp.end())
		{
			mp[tmp] = index++;
			inner.clear();
			inner.push_back(copy);
			res.push_back(inner);
		}
		else
		{
			res[mp[tmp]].push_back(copy);
		}
	}
	for (int i = 0; i<res.size(); ++i)
	{
		sort(res[i].begin(), res[i].end());
	}
	
	return res;
}