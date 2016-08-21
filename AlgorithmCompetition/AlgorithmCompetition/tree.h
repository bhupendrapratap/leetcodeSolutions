#include<cstdlib>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode{
	int val;
	TreeNode *left, *right,*parent;
	TreeNode(int val = 0) :val(val), left(NULL), right(NULL),parent(NULL){}
};

class Tree
{
public:
	void inorder(TreeNode* root,std::vector<int>& nums);
	void postorder(TreeNode* root, std::vector<int>& nums);
	void preorder(TreeNode* root, std::vector<int>& nums);
	void levelorder(TreeNode* root, std::vector<int>& nums);
	Tree(std::vector<int>& nums);
	TreeNode* GetRoot(){ return root; }
	TreeNode* search_bst(TreeNode* start,int key);
	TreeNode* search_bst_iteratio(TreeNode* start, int key);
	TreeNode* maximum(TreeNode* start);
	TreeNode* minimum(TreeNode* start);
	TreeNode* maximum_recrusive(TreeNode* start);
	TreeNode* minimum_recrusive(TreeNode* start);
	TreeNode* successor(TreeNode* start);
	TreeNode* predecessor(TreeNode* start);
	void insert(TreeNode*start, int key);
	TreeNode* removeAt(TreeNode* start,int key);
private:
	TreeNode* root;
};

TreeNode* helper(TreeNode* root, std::vector<int>& nums, int start, int end)
{
	if (start > end)return NULL;
	if (start == end)return new TreeNode(nums[start]);
	int mid = (start + end) / 2;
	root = new TreeNode(nums[mid]);
	TreeNode* left = helper(root, nums, start, mid - 1);
	root->left = left;
	left->parent = root;
	TreeNode* right = helper(root, nums, mid + 1, end);
	root->right = right;
	right->parent = root;
	return root;
}
Tree::Tree(std::vector<int>& nums)
{
	root=helper(root, nums, 0, nums.size()-1);	
}

void Tree::inorder(TreeNode* root,std::vector<int>& nums)
{
	if (root == NULL)return;
	inorder(root->left, nums);
	nums.push_back(root->val);
	inorder(root->right, nums);
}

void Tree::levelorder(TreeNode* root, std::vector<int>& nums)
{
	std::queue<TreeNode*>q;
	if (root == NULL)return;
	q.push(root);
	while (!q.empty())
	{
		TreeNode* node = q.front();
		q.pop();
		nums.push_back(node->val);
		if(node->left)q.push(node->left);
		if(node->right)q.push(node->right);
	}
}

void Tree::preorder(TreeNode* root, std::vector<int>& nums)
{
	if (root == NULL)return;
	nums.push_back(root->val);
	preorder(root->left, nums);
	preorder(root->right, nums);
}

void Tree::postorder(TreeNode* root, std::vector<int>& nums)
{
	if (root == NULL)return;
	postorder(root->left, nums);
	postorder(root->right, nums);
	nums.push_back(root->val);
}

TreeNode* Tree::search_bst(TreeNode* start,int key)
{
	if (start == NULL || key == start->val)return start;
	return key > start->val ? search_bst(start->right, key) : search_bst(start->left, key);
}

TreeNode* Tree::search_bst_iteratio(TreeNode* start, int key)
{
	while (start && key != start->val)
	{
		start = key > start->val ? start->right : start->left;
	}
	return start;
}

TreeNode* Tree::maximum(TreeNode* start)
{
	while (start->right)start = start->right;
	return start;
}

TreeNode* Tree::minimum(TreeNode* start)
{
	while (start->left)start = start->left;
	return start;
}

TreeNode* Tree::maximum_recrusive(TreeNode* start)
{
	if (start->right == NULL)return start;
	return maximum_recrusive(start->right);
}

TreeNode* Tree::minimum_recrusive(TreeNode* start)
{
	if (start->left == NULL)return start;
	return minimum_recrusive(start->left);
}

TreeNode* Tree::successor(TreeNode* start)
{
	if (start->right)return minimum(start->right);
	TreeNode* y = start->parent;
	while (y && start == y->right){ start = y; y = y->parent;}
	return y;
}

TreeNode* Tree::predecessor(TreeNode* start)
{
	if (start->left)return maximum(start->left);
	TreeNode* y = start->parent;
	while (y && start == y->left){ start = y; y = y->parent; }
	return y;
}

void Tree::insert(TreeNode* start, int key)
{
	TreeNode* y = NULL;
	while (start)
	{
		y = start;
		start=key > start->val ? start->right : start->left;
	}
	TreeNode* z = new TreeNode(key);
	z->parent = y;
	if (y == NULL)root = z;
	else if (z->val < y->val)y->left = z;
	else y->right = z;
}

TreeNode* Tree::removeAt(TreeNode* start,int key)
{
	TreeNode* x = search_bst(start, key);
	if (!x)return NULL;
	TreeNode* w = x;
	TreeNode* succ = NULL;
	if (!x->left){
		x->val>x->parent->val ? x->parent->right = x->right : x->parent->left = x->right;succ = x = x->right; }
	else if (!x->right){ x->val>x->parent->val ? x->parent->right = x->left : x->parent->left = x->left; succ = x = x->left; }
	else
	{
		w = successor(w);
		swap(w->val, x->val);
		TreeNode* u = w->parent;
		((u == x) ? u->right : u->left) = succ = w->right;// succ can get from min(x->right),so if x->right is the succ of the x element, then that is u->right not u->left
	}
	if (succ)succ->parent = w->parent;
	return succ;
}