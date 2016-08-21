#include"Header.h"
//int searchInsert(vector<int>& nums, int target) {
//	return (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
//}

int searchInsert(vector<int>& nums, int target) {
	int low = 0, hi = int(nums.size()) - 1,mid=0;
	if (hi < 0 || target < nums[0])return 0;
	if (target>nums[hi])return hi + 1;
	while (low < hi)
	{
		mid = low + (hi - low) / 2;
		if (nums[mid] == target)return mid;
		else if (nums[mid] > target)hi = mid;
		else low = mid + 1;
	}
	return low;
}