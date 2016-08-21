#include"Header.h"
vector<int> rightSideView(TreeNode* root) {
	vector<int>res;
	if (root == NULL)return res;
	queue<TreeNode*>q;
	q.push(root);
	TreeNode* node;
	while (!q.empty())
	{
		int size = int(q.size());
		while (size--)
		{
			node = q.front();
			q.pop();
			if (size == 0)res.push_back(node->val);
			if (node->left)q.push(node->left);
			if (node->right)q.push(node->right);
		}
	}
	return res;
}