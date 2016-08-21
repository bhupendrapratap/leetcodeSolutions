#include"Header.h"




void dfs(vector<vector<int>>&res, vector<int>&ans, vector<int>&nums,int k, int index)
{
	if (ans.size() == k)
	{
		res.push_back(ans);
		return;
	}
	else if (ans.size() > k)return;
	else
	{
		for (int i = index; i < nums.size(); ++i)
		{
			ans.push_back(nums[i]);
			dfs(res, ans, nums, k, i + 1);
			ans.pop_back();
		}
	}
}
vector<vector<int>> combinations(vector<int>nums, int k)
{
	vector<vector<int>>res;
	vector<int>ans;
	dfs(res, ans, nums,k, 0);
	return res;
	
}

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>>res;
	vector<vector<int>>tmp;
	res.push_back({});
	int n = nums.size();
	if (n == 0)return res;
	res.push_back(nums);
	if (n == 1)return res;
	for (int i = 1; i < n; ++i)
	{
		tmp = combinations(nums, i);
		for (auto child : tmp)res.push_back(child);
	}
	return res;

}