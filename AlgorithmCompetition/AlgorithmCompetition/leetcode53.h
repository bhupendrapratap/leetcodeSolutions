#include"Header.h"
int maxSubArray(vector<int>& nums) {
	int sum1 = 0, res = INT_MIN;//in case of all negative number
	for (int i = 0; i < nums.size(); ++i)
	{
		if (sum1 >= 0)sum1 += nums[i];
		else sum1 = nums[i];
		res = max(res, sum1);
	}
	return res;
}