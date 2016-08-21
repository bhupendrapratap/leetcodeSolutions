#include"Header.h"
int removeDuplicates(vector<int>& nums) {
	unordered_map<int, int>mp;
	int n = nums.size(), j=0;
	if (n <= 2)return n;
	for (int i = 0; i < n; ++i)
	{
		mp[nums[i]]++;
		if (mp[nums[i]] <= 2)nums[j++] = nums[i];
	}
	return j;
}


int removeDuplicatesII(vector<int>& nums)
{
	int pre = 0, cur = 1, begin = 2, n = nums.size();
	if (n <= 2)return n;
	for (int i = 2; i < n; ++i)
	{
		if (nums[i] != nums[cur] || nums[cur] != nums[pre])
		{
			nums[begin++] = nums[i];
			cur++;
			pre++;
		}
	}
	return begin;
}