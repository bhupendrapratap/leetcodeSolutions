#include<vector>
#include<algorithm>
using namespace std;
int missingNumber(vector<int>& nums)
{
	int res = 0, i = 0;
	for (int num : nums)
	{
		res ^= num;
		res ^= i;
		i++;
	}
	return res^i;
}

int missingNumber1(vector<int>& nums)
{
	int res = nums.size(), i = 0;
	for (int num : nums)
	{
		res ^= num;
		res ^= i;
		i++;
	}
	return res;
}

int binary_missingnumber(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int left = 0, right = nums.size()-1;
	while (left <=right)
	{
		int mid = (right + left) / 2;
		if (mid < nums[mid])right = mid-1;
		else left = mid +1;
	}
	return left;
}

int binary_missingnumber1(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int left = 0, right = nums.size();
	while (left < right)
	{
		int mid = (right + left) / 2;
		if (mid < nums[mid])right = mid;
		else left = mid + 1;
	}
	return left;
}

// review 2016-6-12
int binary_missingnumber3(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int left = 0, right = nums.size();
	while (left < right)
	{
		int mid = (right + mid) / 2;
		if (mid < nums[mid])right = mid;
		else left = mid + 1;
	}
	return left;
}

int binary_missingnumber4(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int left = 0, right = nums.size();
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (mid < nums[mid])right = mid - 1;
		else left = mid + 1;
	}
	return left;
}



int missingnumber3(vector<int>& nums)
{
	int res = 0, i = 0;
	for (int num : nums)
	{
		res ^= num;
		res ^= i;
		i++;
	}
	return res^i;
}

int missingnumber4(vector<int>& nums)
{
	int res = nums.size(), i = 0;
	for (int num : nums)
	{
		res ^= num;
		res ^= i;
		i++;
	}
	return res;
}
