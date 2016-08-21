#include<queue>
using namespace std;
struct TreeLinkNode {
	TreeLinkNode *left;
	TreeLinkNode *right;
	TreeLinkNode *next;
};

void connect(TreeLinkNode *root) {
	queue<TreeLinkNode* >Q;
	TreeLinkNode* node;
	if (root)Q.push(root);
	while (!Q.empty())
	{
		int size = Q.size();
		while (size--)
		{
			node = Q.front();
			Q.pop();
			node->next = size == 0 ? NULL : Q.front();
			if (node->left)Q.push(node->left);
			if (node->right)Q.push(node->right);
		}
	}

}