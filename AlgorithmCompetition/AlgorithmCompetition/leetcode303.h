#include"Header.h"
class NumArray{
public:
	vector<int>dp;
	NumArray(vector<int>& nums)
	{
		int n = nums.size();
		dp = vector<int>(nums);
		for (int i = 1; i < n; ++i)
		{
			dp[i] = dp[i - 1] + nums[i];
		}
	}

	int sumRange(int i, int j)
	{
		j = j>dp.size() ? dp.size() - 1 : j;
		return i == 0 ? dp[j] : dp[j] - dp[i - 1];
	}
};