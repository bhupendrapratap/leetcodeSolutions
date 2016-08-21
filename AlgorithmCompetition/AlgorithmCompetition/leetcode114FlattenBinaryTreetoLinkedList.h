#include"Header.h"

void preorder(TreeNode* root, vector<int>& v)
{
	if (root == NULL)return;
	v.push_back(root->val);
	preorder(root->left, v);
	preorder(root->right, v);
}
void flatten(TreeNode* root) {
	if (root == NULL)return;
	vector<int>v;
	preorder(root, v);
	root->left = NULL;
	root->right = NULL;
	TreeNode* p = root;
	for (int i = 1; i < v.size(); ++i)
	{
		p->right = new TreeNode(v[i]);
		p = p->right;
	}
}