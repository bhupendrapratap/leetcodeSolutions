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
		if (i>index && candidates[i] == candidates[i - 1])continue;
		if (candidates[i] <= target)
		{
			ans.push_back(candidates[i]);
			dfs(res, ans, candidates, target - candidates[i], i + 1);
			ans.pop_back();
		}
		else return;
	}
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
	vector<int>ans;
	vector<vector<int>>res;
	if (candidates.size() == 0)return res;
	sort(candidates.begin(), candidates.end());
	dfs(res, ans, candidates, target, 0);
	return res;
}