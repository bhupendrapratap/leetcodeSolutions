
/*
@taobupt
*/
#include"Header.h"
TreeNode* makeTree(vector<int>& inorder, int begin1, int end1, vector<int>& postorder, int begin2, int end2)
{
	if (begin2>end2)return NULL;
	if (begin2 == end2)return new TreeNode(postorder[begin2]);
	TreeNode* root = new TreeNode(postorder[end2]);
	int i = begin1;
	for (; i<end1; ++i)
	{
		if (inorder[i] == postorder[end2])break;
	}
	int leftlen = i - begin1;
	root->left = makeTree(inorder, begin1, i - 1, postorder, begin2, begin2 + leftlen - 1);
	root->right = makeTree(inorder, i + 1, end1, postorder, begin2 + leftlen, end2 - 1);
	return root;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
	int n = inorder.size();
	return makeTree(inorder, 0, n - 1, postorder, 0, n - 1);
}