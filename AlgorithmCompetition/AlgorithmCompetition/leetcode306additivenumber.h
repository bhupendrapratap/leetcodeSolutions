#include"Header.h"

bool dfs(string& num, long long pre, long long cur, int x, int y)
{
	if (y == num.size())return true;
	if (y > num.size())return false;
	for (int i = y + 1; i <= num.size(); ++i)
	{
		string t = num.substr(y, i - y);
		long long now = stoll(t);
		if (to_string(now).size() != t.size())continue;
		if (pre + cur < now)return false;
		if (pre + cur == now)return dfs(num, cur, now, y, i);
	}
	return false;
}
bool isAdditiveNumber(string num)
{
	int n = num.size();
	if (n < 3)return false;
	for (int i = 1; i <= n / 3; ++i)
	{
		string s = num.substr(0, i);
		long long pre = stoll(s);
		if (to_string(pre).size() != s.size())continue;
		for (int j = i + 1; j <= 2 * n / 3; ++j)
		{
			string ss = num.substr(i, j - i);
			long long cur = stoll(ss);
			if (to_string(cur).size() != ss.size())continue;
			if (dfs(num, pre, cur, i, j))return true;
		}
	}
	return false;
}

//reviewr
