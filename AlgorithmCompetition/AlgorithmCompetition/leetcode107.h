#include"Header.h"

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

vector<vector<int>> levelOrderBottom(TreeNode* root)
{
	vector<vector<int>>outer;
	vector<int>inner;
	TreeNode* node;
	queue<TreeNode*>q;
	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		inner.clear();
		while (size--)
		{
			node = q.front();
			q.pop();
			inner.push_back(node->val);
			if (node->left)q.push(node->left);
			if (node->right)q.push(node->right);
		}
		outer.push_back(inner);
	}
	vector<vector<int>> res(outer.rbegin(), outer.rend());
	return res;
}