#include"Header.h"
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
{
	int n = nums.size();
	if (n < 2)return false;
	vector<pair<long, int>>v;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(make_pair(long(nums[i]), i));
	}
	sort(v.begin(), v.end(), [](pair<long, int>a, pair<long, int>b){ return a.first < b.first; });
	for (int i = 0; i < n; ++i)
	{
		int j = i + 1;
		while (j < n)
		{
			if (v[j].first - v[i].first > t)break;
			else if ((v[j].second - v[i].second <= k) && (v[j].second - v[i].second >= -k))return true;
			else j++;
		}
	}
	return false;

}