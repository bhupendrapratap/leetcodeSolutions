#include"Header.h"
void dfs(vector<vector<int>>& res, vector<int>& ans, TreeNode* root, int sum)
{
	if (sum == 0 && root->left == NULL && root->right == NULL)
	{
		res.push_back(ans);
		return;
	}
	if (root == NULL)return;//sum<0 is false wrong once because the negative element in the array
	if (root->left)
	{
		ans.push_back(root->left->val);
		dfs(res, ans, root->left, sum - root->left->val);
		ans.pop_back();
	}
	if (root->right)
	{
		ans.push_back(root->right->val);
		dfs(res, ans, root->right, sum - root->right->val);
		ans.pop_back();
	}
}
vector<vector<int>> pathSumII(TreeNode* root, int sum) {
	vector<vector<int>>res;
	vector<int>ans;
	if (root == NULL)return res;
	ans.push_back(root->val);
	dfs(res, ans, root, sum - root->val);
	return res;
}