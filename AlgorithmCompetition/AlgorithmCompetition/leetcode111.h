#include"Header.h"

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

int minDepth(TreeNode* root) {
	if (root == NULL)return 0;
	else if(root->left && root->right)return min(minDepth(root->left), minDepth(root->right)) + 1;
	else if (root->left)return minDepth(root->left) + 1;
	else return minDepth(root->right) + 1;
}