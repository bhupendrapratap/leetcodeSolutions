#include"Header.h"
int findKthLargest(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end(), greater<int>());
	return nums[k - 1];
}

int findKthLargestII(vector<int>& nums, int k) {
	priority_queue<int, vector<int>, greater<int>>pq;
	int n = nums.size();
	for (int i = 0; i<k; ++i)
	{
		pq.push(nums[i]);
	}
	for (int i = k; i<n; ++i)
	{
		if (nums[i]>pq.top())
		{
			pq.pop();
			pq.push(nums[i]);
		}
	}
	return pq.top();
}

int findKthLargestIII(vector<int>& nums, int k) {
	priority_queue<int> pq(nums.begin(), nums.end());
	for (int i = 0; i < k - 1; i++)
		pq.pop();
	return pq.top();
}