#include"Header.h"

vector<int>robSub(TreeNode* root)
{
	if (root == NULL)return{ 0, 0 };
	vector<int>left = robSub(root->left);
	vector<int>right = robSub(root->right);
	vector<int>res(2, 0);
	res[0] = root->val + left[1] + right[1];
	res[1] = max(left[1], left[0]) + max(right[1], right[0]);
	return res;
}
int rob(TreeNode* root) {
	vector<int>res = robSub(root);
	return max(res[0], res[1]);
}