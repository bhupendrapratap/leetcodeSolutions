#include"Header.h"

/*
@taobupt
*/

void inorder(TreeNode*root, vector<int>& res)
{
	if (root == NULL)return;
	inorder(root->left, res);
	res.push_back(root->val);
	inorder(root->right, res);
}

bool isValidBST(TreeNode* root)
{
	if (root == NULL)return true;
	vector<int>res;
	inorder(root, res);
	for (int i = 1; i < res.size(); ++i)
	{
		if (res[i] <= res[i - 1])return false;
	}
	return true;
}