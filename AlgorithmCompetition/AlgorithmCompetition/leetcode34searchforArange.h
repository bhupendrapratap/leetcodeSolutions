#include"Header.h"
vector<int> searchRange(vector<int>& nums, int target) {
	vector<int>res;
	int left = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
	if (nums.size()==0||nums[left] != target)return{ -1, -1 };
	int right = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
	res.push_back(left);
	res.push_back(right - 1);
	return res;
}