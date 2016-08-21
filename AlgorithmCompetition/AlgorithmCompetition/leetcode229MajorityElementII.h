#include"Header.h"
vector<int> majorityElement(vector<int>& nums) {
	unordered_map<int, int>mp;
	vector<int>res;
	int n = nums.size();
	for (int i = 0; i<n; ++i)
	{
		mp[nums[i]]++;
	}
	for (unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
	{
		if (it->second >n / 3)res.push_back(it->first);
	}
	return res;
}