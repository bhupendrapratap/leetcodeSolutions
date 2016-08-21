#include"Header.h"
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

bool isSymmetricHelper(TreeNode* left, TreeNode* right)
{
	if (left == NULL || right == NULL)return left == right;
	if (left->val != right->val)return false;
	return isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
	return root == NULL || isSymmetricHelper(root->left, root->right);
}

bool isSymmetric1(TreeNode* root)
{
	TreeNode* left, *right;
	if (root == NULL)return true;
	queue<TreeNode*>q1, q2;
	q1.push(root->left);
	q2.push(root->right);
	while (!q1.empty() && !q2.empty())
	{
		left = q1.front();
		q1.pop();
		right = q2.front();
		q2.pop();
		if (left == NULL && right == NULL)continue;
		if (NULL == left || right == NULL)return false;
		if (left->val != right->val)return false;
		q1.push(left->left);
		q1.push(left->right);
		q2.push(right->right);
		q2.push(right->left);
	}
}