#include"Header.h"
void dfs(vector<vector<int>>& res, vector<int>& ans, vector<int>& candidates, int target, int index)
{
	if (target == 0)
	{
		res.push_back(ans);
		return;
	}
	for (int i = index; i<candidates.size(); ++i)
	{
		if (candidates[i] <= target)
		{
			ans.push_back(candidates[i]);
			dfs(res, ans, candidates, target - candidates[i], i);
			ans.pop_back();
		}
		else return;
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	vector<int>ans;
	vector<vector<int>>res;
	if (candidates.size() == 0)return res;
	sort(candidates.begin(), candidates.end());
	dfs(res, ans, candidates, target, 0);
	return res;
}