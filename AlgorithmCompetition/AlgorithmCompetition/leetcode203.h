#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};

ListNode* removeElements(ListNode* head, int val)
{
	if (head == NULL)return head;
	ListNode* first = new ListNode(0);
	first->next = head;
	ListNode* p = head;
	ListNode* q = first;
	while (p)
	{
		if (p->val == val)
		{
			q->next = p->next;
			p = p->next;
		}
		else
		{
			p = p->next;
			q = q->next;
		}

	}
	return first->next;
}