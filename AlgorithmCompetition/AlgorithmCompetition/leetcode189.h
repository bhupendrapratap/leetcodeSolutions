#include"Header.h"
void reverse_vector(vector<int>& v, int begin, int end)
{
	while (begin < end)swap(v[begin++], v[end--]);
}
void rotate(vector<int>& nums, int k) {
	int n = nums.size();
	k %= n;
	k = n - k;
	reverse_vector(nums, 0, k - 1);
	reverse_vector(nums, k, n - 1);
	reverse_vector(nums, 0, n - 1);
}