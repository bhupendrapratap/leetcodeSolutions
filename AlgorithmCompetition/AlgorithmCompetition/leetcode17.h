#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

void helper(vector<string>& res, string digits, string& path, unordered_map<char, string>& mp, int index)
{
	if (digits.size() == path.size())
	{
		res.push_back(path);
		return;
	}
	else if (digits.size() < path.size())return;
	else
	{
		for (int i = index; i < digits.size(); ++i)
		{
			for (int j = 0; j < mp[digits[i]].size(); ++j)
			{
				path.push_back(mp[digits[i]][j]);
				helper(res, digits, path, mp, i+1);
				path.pop_back();
			}
		}
	}
}
vector<string> letterCombinations(string digits) {
	vector<string>res;
	string path = "";
	unordered_map<char, string>mp = { { '2', "abc" }, { '3', "def" }, { '4', "ghi" }, { '5', "jkl" }, { '6', "mno" }, { '7', "qprs" }, { '8', "tuv" }, { '9', "wxyz" } };
	helper(res,digits,path,mp,0);
	return res;
}