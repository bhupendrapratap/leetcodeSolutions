#include"Header.h"

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

bool helper(TreeNode* root, int sum)
{
	if (root->left == NULL && root->right == NULL)return sum == 0;
	bool a = false, b = false;
	if (root->left)a = helper(root->left, sum - root->left->val);
	if (root->right)b = helper(root->right, sum - root->right->val);
	return a || b;
}

bool hasPathSum(TreeNode* root, int sum) {
	if (root == NULL)return false;
	return helper(root, sum - root->val);
}

bool hasPathSum_neater(TreeNode* root, int sum)
{
	if (root == NULL)return false;
	if (root->val == sum && root->left == NULL && root->right == NULL)return true;
	return hasPathSum_neater(root->left, sum - root->val) || hasPathSum_neater(root->right, sum - root->val);
}