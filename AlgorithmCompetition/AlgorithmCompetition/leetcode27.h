#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
	int i = 0, j = -1, n = nums.size();
	if (n == 0)return 0;
	while (++j < n)
	{
		if (nums[j] != val)nums[i++] = nums[j];
	}
	return i;
}