#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) :val(val), left(NULL), right(NULL){}
};


ListNode* makeList(int a[], int n)
{
	ListNode* first = new ListNode(0);
	ListNode* p = first;
	int i = 0;
	while (i < n)
	{
		p->next = new ListNode(a[i]);
		p = p->next;
		i++;
	}
	return first->next;
}