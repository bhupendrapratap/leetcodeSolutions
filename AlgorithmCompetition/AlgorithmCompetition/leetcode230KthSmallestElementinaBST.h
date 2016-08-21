#include"Header.h"

void inorder(vector<int> &v, TreeNode* root, int k)
{
	if (v.size() == k)return;
	if (root == NULL)return;
	inorder(v, root->left, k);
	v.push_back(root->val);
	inorder(v, root->right, k);
}

int kthSmallest(TreeNode* root, int k) {
	vector<int>v;
	inorder(v, root, k);
	return v[k - 1];
}