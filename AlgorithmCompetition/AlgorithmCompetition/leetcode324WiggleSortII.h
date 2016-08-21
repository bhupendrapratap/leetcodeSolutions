#include"Header.h"
void wiggleSort(vector<int>& nums) {
	vector<int>b(nums.begin(), nums.end());
	sort(b.begin(), b.end());
	int j = 0;
	if (nums.size() % 2 == 0)
	{
		for (int i = int(nums.size()) - 2; i >= 0; i -= 2)nums[i] = b[j++];
		for (int i = int(nums.size()) - 1; i >= 1; i -= 2)nums[i] = b[j++];
	}
	else
	{
		for (int i = int(nums.size()) - 1; i >= 0; i -= 2)nums[i] = b[j++];
		for (int i = int(nums.size()) - 2; i >= 1; i -= 2)nums[i] = b[j++];
	}
}