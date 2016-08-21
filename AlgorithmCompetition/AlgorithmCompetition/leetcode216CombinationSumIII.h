#include"Header.h"

void helper(vector<vector<int>>& res, vector<int>& v, int k, int n, int index)
{
	if (v.size() == k && n == 0)
	{
		res.push_back(v);
		return;
	}
	if (v.size()>k || n<0)return;
	for (int i = index; i <= 9; ++i)
	{
		if (n >= i)
		{
			v.push_back(i);
			helper(res, v, k, n - i, i + 1);
			v.pop_back();
		}
	}
}
vector<vector<int>> combinationSum3(int k, int n) {
	vector<vector<int>>res;
	vector<int>v;
	if (k>9 || n>45)return res;
	helper(res, v, k, n, 1);
	return res;
}