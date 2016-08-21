#include"Header.h"
/*
@taobupt
*/

TreeNode* myBST(vector<int>& nums, int s, int e)
{
	if (s > e)return NULL;
	if (s == e)return new TreeNode(nums[s]);
	int mid = s + (e - s) / 2;
	TreeNode* node = new TreeNode(nums[mid]);
	node->left = myBST(nums, s, mid - 1);
	node->right = myBST(nums, mid + 1, e);
	return node;
}

TreeNode* sortedListToBST(ListNode* head) {
	vector<int>nums;
	while (head)
	{
		nums.push_back(head->val);
		head = head->next;
	}
	int n = nums.size();
	if (n == 0)return NULL;
	return myBST(nums, 0, n - 1);
}