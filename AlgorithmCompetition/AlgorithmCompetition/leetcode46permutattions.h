#include"Header.h"
void perm(vector < vector<int>>&res, vector<int>& nums, int k)
{
	if (k == nums.size())
	{
		res.push_back(nums);
		return;
	}
	if (k > nums.size())return;
	else
	{
		for (int i = k; i <nums.size(); ++i)
		{
			swap(nums[i], nums[k]);
			perm(res, nums, k + 1);
			swap(nums[i], nums[k]);
		}
	}
}

vector<vector<int>> permute(vector<int>& nums)
{
	vector <vector<int>>res;
	if (nums.size() == 0)return res;
	perm(res, nums, 0);
	//sort(res.begin(), res.end());
	return res;
	
}