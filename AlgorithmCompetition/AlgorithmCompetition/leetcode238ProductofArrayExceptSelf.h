#include"Header.h"
vector<int> productExceptSelf(vector<int>& nums) {
	int n = nums.size();
	vector<int>res(n, 0);
	vector<int>front(n, 1);
	vector<int>end(n, 1);
	for (int i = 1; i < n; ++i)
	{
		front[i] = front[i - 1] * nums[i - 1];
		end[n - i - 1] = end[n - i] * nums[n - i];
	}
	for (int i = 0; i < n; ++i)
	{
		res[i] = front[i] * end[i];
	}
	return res;
	
}