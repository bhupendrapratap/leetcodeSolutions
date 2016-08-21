#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
	int i=0, j = 0,n=nums.size();
	if (n < 2)return n;
	while (++j < n)
	{
		if (nums[i] != nums[j])nums[++i] = nums[j];
	}
	return i + 1;
}