#include"Header.h"

void dfs(vector<string>& res, string& total, TreeNode* root)
{
	if (root->left == NULL && root->right == NULL)
	{
		res.push_back(total);
		return;
	}
	if (root->left)
	{
		total.push_back(char(root->left->val + '0'));
		dfs(res, total, root->left);
		total.pop_back();
	}
	if (root->right)
	{
		total.push_back(char(root->right->val + '0'));
		dfs(res, total, root->right);
		total.pop_back();
	}
}

int sumNumbers(TreeNode* root) {
	if (root == NULL)return 0;
	vector<string> res;
	int ans = 0;
	string total =to_string(root->val);
	dfs(res, total, root);
	for (auto n : res)
	{
		ans += stoi(n);
	}
	return ans;
}