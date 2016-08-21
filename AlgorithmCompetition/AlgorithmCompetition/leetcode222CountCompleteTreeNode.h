#include"Header.h"

int getRight(TreeNode* root)
{
	int count = 0;
	while (root->right != NULL)
	{
		count++;
		root = root->right;
	}
	return count;
}

int getLeft(TreeNode* root)
{
	int count = 0;
	while (root->left != NULL)
	{
		count++;
		root = root->left;
	}
	return count;
}

int countNodes(TreeNode* root) {
	if (root == NULL)return 0;
	int r = getRight(root);
	int l = getLeft(root);
	if (l == r)return (2 << l) - 1;
	else return countNodes(root->left) + countNodes(root->right) + 1;
}