#include<cstdlib>
#include<vector>
using namespace std;
void helper112(vector<vector<int> >& ret, vector<int>& candidates, vector<int>& nums, int index, int k)
{
	if (nums.size() == k)
	{
		ret.push_back(nums);
		return;
	}
	else if (nums.size()>k)return;
	else
	{
		for (int i = index; i<candidates.size(); ++i)
		{
			nums.push_back(candidates[i]);
			helper112(ret, candidates, nums, i+1, k);
			nums.pop_back();
		}
	}
}
vector<vector<int> > combine(int n, int k) {
	vector<vector<int> > ret;
	vector<int>candidates(n, 0);
	vector<int>nums;
	for (int i = 0; i<n; ++i)
	{
		candidates[i] = (i + 1);
	}
	helper112(ret, candidates, nums, 0, k);
	return ret;
}