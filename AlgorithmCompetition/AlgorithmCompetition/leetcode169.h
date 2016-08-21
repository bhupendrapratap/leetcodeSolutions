#include<unordered_map>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
	// unordered_map<int, int>mp;
	// int length = nums.size();
	// for (int i = 0; i<length; ++i)
	// {
	// 	mp[nums[i]]++;
	// }
	// for (unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
	// {
	// 	if (it->second > length / 2)return it->first;
	// }
	// return nums[0];

	unordered_map<int, int>mp;
	int n = nums.size();
	for (int it : nums)
	{
		if (++mp[it] > n / 2)return it;
	}
	return 0;
}