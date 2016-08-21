#include"Header.h"
vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
	vector<pair<int, int>>res;
	int m = nums1.size(), n = nums2.size();
	for (int i = 0; i<m; ++i)
	{
		for (int j = 0; j<n; ++j)
		{
			res.push_back(make_pair(nums1[i], nums2[j]));
		}
	}
	sort(res.begin(), res.end(), [](pair<int, int>a, pair<int, int>b){return (a.first+a.second) < (b.first+b.second); });
	if (res.size() >= k)
	{
		vector<pair<int, int>>ans(res.begin(), res.begin() + k);
		return ans;
	}
	return res;
}

struct cmp{
	bool operator()(pair<long, int>a, pair<long, int>b)
	{
		return (a.first + a.second) < (b.first + b.second);
	}
};

vector<pair<int, int>> kSmallestPairs1(vector<int>& nums1, vector<int>& nums2, int k) {
	
	priority_queue < pair<int, int>, vector <pair<int, int>>,cmp>pq;
	int m = nums1.size(), n = nums2.size();
	for (int i = 0; i<m; ++i)
	{
		for (int j = 0; j<n; ++j)
		{
			if (pq.size() < k)pq.push(make_pair(nums1[i], nums2[j]));
			else
			{
				if (nums1[i] + nums2[j] < pq.top().first + pq.top().second)
				{
					pq.pop();
					pq.push(make_pair(nums1[i], nums2[j]));
				}
			}
		}
	}
	vector<pair<int, int>>res;
	while (!pq.empty())
	{
		res.push_back(pq.top());
		pq.pop();
	}
	reverse(res.begin(), res.end());
	return res;
	
	
}