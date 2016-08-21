#include"Header.h"

TreeNode* helper(vector<int>& preorder, int begin1, int end1, vector<int>& inorder, int begin2, int end2)
{
	if (begin1 >end1)return NULL;
	else if (begin1 == end1)return new TreeNode(preorder[begin1]);
	else
	{
		TreeNode* root = new TreeNode(preorder[begin1]);
		int i = begin2;
		for (; i < end2; ++i)
		{
			if (inorder[i] == preorder[begin1])break;
		}
		int leftlen = i - begin2;
		root->left = helper(preorder, begin1 + 1, begin1 + leftlen, inorder, begin2, begin2 + leftlen - 1);
		root->right = helper(preorder, begin1 + leftlen + 1, end1, inorder, begin2 + leftlen + 1, end2);
		return root;
	}
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
	int n = preorder.size();
	return helper(preorder, 0, n - 1, inorder, 0, n - 1);
}