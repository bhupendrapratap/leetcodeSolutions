#include"Header.h"
void sortColors(vector<int>& nums) {
	int begin = 0, end = nums.size() - 1, k;
	for (k = 0; k <= end;)
	{
		if (nums[k] == 0)swap(nums[begin++], nums[k++]);
		else if (nums[k] == 2)swap(nums[k], nums[end--]);
		else k++;
	}
}

//review

void sortcolor1(vector<int>& nums)
{
	int begin = 0, end = nums.size() - 1, k;
	for (k = 0; k <= end;)
	{
		if (nums[k] == 0)swap(nums[begin++], nums[k++]);
		else if (nums[k] == 2)swap(nums[k], nums[end--]);
		else k++;
	}
}