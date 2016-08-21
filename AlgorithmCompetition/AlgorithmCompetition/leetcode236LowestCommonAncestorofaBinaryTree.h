#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

TreeNode* lowestCommonAncestor_recrusive(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (root == NULL || p == root || q == root)return root;
	TreeNode* left = lowestCommonAncestor_recrusive(root->left, p, q);
	TreeNode* right = lowestCommonAncestor_recrusive(root->right, p, q);
	if (p&&q)return root;
	return left ? left : right;
}

vector<TreeNode* >stkTo(stack<TreeNode*>stk)
{
	vector<TreeNode*>res;
	TreeNode* node;
	while (!stk.empty())
	{
		node = stk.top();
		stk.pop();
		res.push_back(node);
	}
	reverse(res.begin(), res.end());
	return res;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
	if (root == NULL || p == root || q == root)return root;
	stack<TreeNode*>stk;
	vector<TreeNode*>vp;
	vector<TreeNode*>vq;
	unordered_map<TreeNode*, bool>mp;
	stk.push(root);
	mp[root] = true;
	TreeNode* top;
	while (!stk.empty())
	{
		top = stk.top();
		if (top->left && !mp[top->left])
		{
			stk.push(top->left);
			mp[top->left] = true;
			if (top->left == p)
			{
				vp = stkTo(stk);
				if (!vq.empty())break;
			}
			if (top->left == q)
			{
				vq = stkTo(stk);
				if (!vp.empty())break;
			}
			continue;
		}
		if (top->right && !mp[top->right])
		{
			stk.push(top->right);
			mp[top->right] = true;
			if (top->right == p)
			{
				vp = stkTo(stk);
				if (!vq.empty())break;
			}
			if (top->left == q)
			{
				vq = stkTo(stk);
				if (!vp.empty())break;
			}
		}
		stk.pop();
	}
	int i = 0;
	for (i = 0; i < vp.size() && i < vq.size(); ++i)
	{
		if (vp[i] != vq[i])break;
	}
	return vp[i - 1];

}

