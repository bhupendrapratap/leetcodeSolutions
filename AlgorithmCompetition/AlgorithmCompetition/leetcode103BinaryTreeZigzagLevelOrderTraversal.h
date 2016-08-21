#include"Header.h"
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
	vector<vector<int>>res;
	vector<int>ans;
	queue<TreeNode*>q;
	TreeNode* node;
	int size = 0,even=1;
	q.push(root);
	while (!q.empty())
	{
		size = q.size();
		ans.clear();
		while (size--)
		{
			node = q.front();
			q.pop();
			ans.push_back(node->val);
			if (node->left)q.push(node->left);
			if (node->right)q.push(node->right);
		}
		if (even < 0)reverse(ans.begin(), ans.end());
		even = -even;
		res.push_back(ans);
	}
	return res;
}