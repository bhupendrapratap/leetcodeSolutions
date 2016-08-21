#include"Header.h"
int maxProduct(vector<int>& nums) {
	int n = nums.size();
	if (n <= 0)return 0;
	int res = nums[0];
	vector<int>maxium(nums.size(), nums[0]);
	vector<int>minium(nums.size(), nums[0]);
	for (int i = 1; i < n; ++i)
	{
		maxium[i] = max(max(nums[i], nums[i] * minium[i - 1]), nums[i] * maxium[i - 1]);
		minium[i] = min(min(nums[i], nums[i] * maxium[i - 1]), nums[i] * minium[i - 1]);
		res = max(res, maxium[i]);
	}
	return res;
}