#include"Header.h"
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

void helper(vector<string>& res, string& path, TreeNode* root)
{
	if (root->left == NULL && root->right == NULL)
	{
		string tmp = "";
		int i = 0;
		for (; i < path.size()-1; ++i)
		{
			tmp.push_back(path[i]);
			tmp += "->";
		}
		tmp.push_back(path[i]);
		res.push_back(tmp);
		return;
	}
	if (root->left){
		path.push_back(root->left->val + '0');
		helper(res, path, root->left);
		path.pop_back();
	}
	if (root->right)
	{
		path.push_back(root->right->val + '0');
		helper(res, path, root->right);
		path.pop_back();
	}
}
vector<string> binaryTreePaths(TreeNode* root) {
	vector<string>res;
	if (root == NULL)return res;
	string path = "";
	path.push_back(root->val+'0');
	helper(res, path, root);
	return res;
}