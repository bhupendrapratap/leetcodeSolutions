#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
	vector<int>copy(nums);
	sort(copy.begin(), copy.end());
	int n = nums.size(), i = nums.size() - 2, j = 0;
	while (i >= 0)
	{
		if (nums[i]<nums[i + 1])break;
		i--;
	}
	if (i == -1)
	{
		sort(nums.begin(), nums.end()); return;
	}
	int index = i + 1;
	int res = INT_MAX;
	while (index < n)
	{
		if (nums[index] > nums[i])
		{
			res = min(res, nums[index]);
		}
		index++;
	}
	j = i + 1;
	while (j<n)
	{
		if (nums[j] == res)break;
		j++;
	}
	swap(nums[i], nums[j]);
	sort(nums.begin() + i + 1, nums.end());
}



//review  2016-06-12
void next(vector<int>& nums)
{
	int n = nums.size(), i = nums.size() - 2, j = 0;
	while (i >= 0)
	{
		if (nums[i] < nums[i + 1])break;
		i--;
	}
	if (i == -1){ sort(nums.begin(), nums.end()); return; }
	int index = i + 1;
	int res = INT_MAX;
	while (index < n)
	{
		if (nums[index] > nums[i])res = min(res, nums[index]);
		index++;
	}
	j = i + 1;
	while (j < n)
	{
		if (nums[j] == res)break;
		j++;
	}
	swap(nums[i], nums[j]);
	sort(nums.begin(), nums.end());
	return;

}

//reivew

struct key_value{
	int key, value;
	key_value(int x, int y) :key(x), value(y){};
};

