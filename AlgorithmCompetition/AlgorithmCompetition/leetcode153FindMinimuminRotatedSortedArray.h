#include"Header.h"
int findMin(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	return nums[0];
}

//binary search

int findMin_neater(vector<int>& nums) {
	int low = 0, hi = int(nums.size()) - 1,mid=0;
	while (low < hi)
	{
		if (nums[low]<nums[hi])
			return nums[low];
		mid = low + (hi - low) / 2;
		if (nums[mid] >= nums[low])low = mid + 1;
		else hi = mid;
	}
	return nums[low];
}

int findMin1(vector<int> &num) {
	int start = 0, end = num.size() - 1;

	while (start<end) {
		if (num[start]<num[end])
			return num[start];

		int mid = (start + end) / 2;

		if (num[mid] >= num[start]) {
			start = mid + 1;
		}
		else {
			end = mid;
		}
	}

	return num[start];
}

int findMin2(vector<int> &num) {
	//if (num == null || num.length < 1) return 0; // ask interviewer which value should return: Integer.MIN_VALUE or throw a Exception.  

	int low = 0, high = num.size() - 1;
	while (low < high) {
		int mid = low + (high - low) / 2;
		int x = num[mid];
		if (mid != num.size() - 1 && x>num[mid + 1]){
			return num[mid + 1];
		}
		else if (num[mid] < num[low]) {
			high = mid;
		}
		else if (num[mid] > num[high]) {
			low = mid;
		}
		else {
			return num[low];
		}
	}
	return num[low];
}