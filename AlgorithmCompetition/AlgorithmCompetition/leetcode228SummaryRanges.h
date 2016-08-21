#include"Header.h"
vector<string> summaryRanges(vector<int>& nums)
{
	vector<string>res;
	int n = nums.size(), start = 0, end = 0;
	if (n == 0)return res;
	for (int i = 1; i < n&&end < n; ++i)
	{
		if (nums[i] - nums[end] == 1)end++;
		else
		{
			start == end ? res.push_back(to_string(nums[start])) : res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
			start = end = 0;
		}
	}
	start == end ? res.push_back(to_string(nums[start])) : res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
	return res;
}