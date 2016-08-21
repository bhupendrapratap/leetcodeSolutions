#include"Header.h"
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

void preorder(TreeNode* root, vector<int>& v)
{
	if (root == NULL)
	{
		v.push_back(INT_MAX);
		return;
	}
	v.push_back(root->val);
	preorder(root->left, v);
	preorder(root->right, v);
}

void inorder(TreeNode* root, vector<int>& v)
{
	if (root == NULL)
	{
		v.push_back(INT_MAX);
		return;
	}
	inorder(root->left, v);
	v.push_back(root->val);
	inorder(root->right, v);
}

bool isSameTree(TreeNode* p, TreeNode* q)
{
	if (p == NULL && q == NULL)return true;
	if (p == NULL || q == NULL)return false;
	vector<int>pre;
	vector<int>qre;
	vector<int>post;
	vector<int>qost;
	preorder(p, pre);
	preorder(q, qre);
	int n = pre.size(), n1 = qre.size();
	if (n != n1)return false;
	inorder(p, post);
	inorder(q, qost);
	for (int i = 0; i < n; ++i)
	{
		if (pre[i] != qre[i] || post[i] != qost[i])return false;
	}
	return true;
}


bool isSameTree1(TreeNode* p, TreeNode* q)
{
	if (p == NULL || q == NULL)return p == q;
	return (p->val == q->val && isSameTree1(p->left, q->left) && isSameTree1(p->right, q->right));
}