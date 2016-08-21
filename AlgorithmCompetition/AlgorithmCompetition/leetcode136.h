#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
	int res = 0;
	for (int num : nums)
	{
		res ^= num;
	}
	return res;
}

//review 2016-06-12

int singlenumber(vector<int>& nums)
{
	int res = 0;
	for (int num : nums)
	{
		res ^= num;
	}
	return res;
}