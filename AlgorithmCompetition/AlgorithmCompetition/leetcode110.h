#include"Header.h"

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};



int getHeight(TreeNode* root)
{
	if (root == NULL)return 0;
	int l = getHeight(root->left);
	int r = getHeight(root->right);
	if (l < 0 || r < 0 || abs(l - r)>1)return -1;
	else return max(l, r) + 1;
}
bool isBalanced(TreeNode* root)
{
	if (root = NULL)return true;
	int l = getHeight(root->left);
	int r = getHeight(root->right);
	if (l < 0 || r < 0 || abs(l - r)>1)return false;
	else return true;
}
