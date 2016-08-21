#include"Header.h"
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (root == NULL || p == NULL || q == NULL)return NULL;
	if ((root->val > p->val && root->val > q->val) || (root->val < p->val && root->val < q->val))
	{
		root = root->val > q->val ? root->left : root->right;
		while (root)
		{
			if (root->val > max(p->val, q->val))root = root->left;
			else if (root->val < min(p->val, q->val))root = root->right;
			else return root;
		}
	}
	else return root;

}

TreeNode* lowestCommonAncestor_recreusive(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (root == NULL || p == NULL || q == NULL)return NULL;
	if (root->val>min(p->val, q->val) && root->val < max(p->val, q->val))return root;
	return root->val>max(p->val, q->val) ? lowestCommonAncestor_recreusive(root->left, p, q) : lowestCommonAncestor_recreusive(root->right, p, q);

}