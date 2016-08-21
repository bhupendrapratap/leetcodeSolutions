#include"Header.h"
int search(vector<int>& nums, int target) {
	int low = 0, n = nums.size(), hi = n - 1, mid = 0;
	if (hi < 0)return -1;
	while (low < hi)
	{
		mid = (low + hi) / 2;
		if (nums[mid] == target)return mid;
		if (nums[mid] > nums[hi])
		{
			if (nums[mid] > target && nums[low] <= target)hi = mid;
			else low = mid + 1;
		}
		else if (nums[mid] < nums[hi])
		{
			if (nums[mid] < target && nums[hi] >= target)low = mid + 1;
			else hi = mid;
		}
	}
	return nums[low] == target ? low : -1;
}