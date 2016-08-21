#include"Header.h"
int lengthOfLIS(vector<int>& nums)
{
	int n = nums.size(),res=1;
	if (n <= 1)return n;
	vector<int>dp(n, 1);
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (nums[i]>nums[j])dp[i] = max(dp[i], dp[j] + 1);
		}
		res = max(res, dp[i]);
	}
	//sort(dp.begin(), dp.end());// is not increaing all the way  dp[i] £ºthe number of <=nums[i]
	return res;
}


int lengthOfLIS_neater(vector<int>& nums) {
	vector<int> res;
	for (int i = 0; i<nums.size(); i++) {
		auto it = std::lower_bound(res.begin(), res.end(), nums[i]);
		if (it == res.end()) res.push_back(nums[i]);
		else *it = nums[i];
	}
	return res.size();
}