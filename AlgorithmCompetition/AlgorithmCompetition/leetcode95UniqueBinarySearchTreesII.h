#include"Header.h"
struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};

vector<TreeNode *> Helper(int begin, int end)
{
	vector<TreeNode *> ret;
	if (begin > end)
		ret.push_back(NULL);
	else if (begin == end)
	{
		TreeNode* node = new TreeNode(begin);
		ret.push_back(node);
	}
	else
	{
		for (int i = begin; i <= end; i++)
		{//root
			vector<TreeNode *> left = Helper(begin, i - 1);
			vector<TreeNode *> right = Helper(i + 1, end);
			for (int l = 0; l < left.size(); l++)
			{
				for (int r = 0; r < right.size(); r++)
				{
					//new tree
					TreeNode* root = new TreeNode(i);
					root->left = left[l];
					root->right = right[r];
					ret.push_back(root);
				}
			}
		}
	}
	return ret;
}

vector<TreeNode *> generateTrees(int n) {
	vector<TreeNode *>v;
	if (n<1)return v;
	v= Helper(1, n);
	return v;
}