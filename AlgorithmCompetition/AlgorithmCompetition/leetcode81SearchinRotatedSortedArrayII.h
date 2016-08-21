#include"Header.h"

bool search(vector<int>& nums, int target) {
	int low = 0, n = nums.size(), hi = n - 1, mid = 0;
	if (hi<0)return false;
	while (low < hi)
	{
		mid = (low + hi) / 2;
		if (nums[mid] == target)return true;
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
		else
		{
			hi--;
		}
	}
	return nums[low] == target;
}