#include"Header.h"

/*
@taobupt
2016-7-8
*/
bool isPalindrome(string x)
{
	string tmp = x;
	reverse(x.begin(), x.end());
	return x == tmp;
}

void dfs(vector<vector<string>>& res, vector<string>&total, int index,string& s)
{
	if (index == s.size())
	{
		res.push_back(total);
		return;
	}
	if (index > s.size())return;
	for (int j = 1; j <= s.size() - index; ++j)
	{
		if (isPalindrome(s.substr(index, j)))
		{
			cout << s.substr(index, j) << endl;
			total.push_back(s.substr(index, j));
			dfs(res, total, index + j, s);
			total.pop_back();
		}
	}
}

vector<vector<string>> partition(string s) {
	vector<vector<string>>res;
	vector<string>total;
	dfs(res, total, 0, s);
	return res;
}