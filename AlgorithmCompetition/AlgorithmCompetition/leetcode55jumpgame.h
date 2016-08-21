#include"Header.h"
bool canJump(vector<int>& nums)
{
	int i = 0, le = nums.size();
	if (i + nums[i] >= le - 1)return true;
	while (i+nums[i] < le - 1)
	{
		if (nums[i] == 0 && (i<le - 1))return false;
		int m = 1 + nums[i + 1];
		int key = nums[i];
		int index = i;
		for (int j = 1; j <= key; ++j)
		{
			if (m <= j + nums[j + index])
			{
				m = j + nums[j + index];
				i = index + j;
			}
		}
	}
	return true;
}