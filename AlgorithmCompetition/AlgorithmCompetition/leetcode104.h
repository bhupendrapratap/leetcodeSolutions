#include"Header.h"

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

int maxDepth(TreeNode* root) {
	if (root == NULL)return 0;
	else return max(maxDepth(root->right), maxDepth(root->left)) + 1;
}