#include"Header.h"
class BSTIterator {
public:
	queue<int>q;
	void inorder(TreeNode* root,queue<int>& q)
	{
		if (root == NULL)return;
		inorder(root->left, q);
		q.push(root->val);
		inorder(root->right, q);
	}
	BSTIterator(TreeNode *root) {
		inorder(root, q);
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		return !q.empty();
	}

	/** @return the next smallest number */
	int next() {
		int top = q.front();
		q.pop();
		return top;
	}
};