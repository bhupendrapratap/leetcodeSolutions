#include<vector>
using namespace std;
#include<numeric>
#include<functional>
vector<int> singleNumberIII(vector<int>& nums)
{
	int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
	diff &= -diff;//find the last 1 digits
	vector<int>res = { 0, 0 };
	for (int num : nums)
	{
		(num & diff) == 0 ? res[0] ^= num : res[1] ^= num;
	}
	return res;
}


//review 2016-06-12

vector<int>singleNumberIII_REIVEW(vector<int>&nums)
{
	int diff = accumulate(nums.begin(), nums.end(), 0, bit_or<int>());
	diff &= -diff;
	vector<int>res = { 0, 0 };
	for (int num : nums)
	{
		(num & diff) == 0 ? res[0] ^= num : res[1] ^= num;
	}
	return res;
}