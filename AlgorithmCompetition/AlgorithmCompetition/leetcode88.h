#include"Header.h"
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	vector<int>nums(m + n, 0);
	int i = 0, j = 0, k = 0;
	for (i = 0, j = 0, k = 0; i < m&&j < n;)
	{
		if (nums1[i]>nums2[j])nums[k++] = nums2[j++];
		else nums[k++] = nums1[i++];
	}
	while (i < m){ nums[k++] = nums1[i++];}
	while (j < n){ nums[k++] = nums2[j++];}
	nums1 = nums;
}