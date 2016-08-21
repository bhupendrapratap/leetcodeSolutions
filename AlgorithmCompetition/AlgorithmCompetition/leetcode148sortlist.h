#include"Header.h"

ListNode* merge(ListNode* a, ListNode*b)
{
	ListNode* head = new ListNode(0);
	ListNode* c = head;
	while (a &&b)
	{
		if (a->val < b->val)
		{
			c->next = a; c = a; a = a->next;
		}
		else
		{
			c->next = b; c = b; b = b->next;
		}
	}
	c->next = (a == 0) ? b : a;
	return head->next;
}
ListNode* sortList(ListNode* head)
{
	if (head == NULL || head->next == NULL)return head;
	ListNode* a = head;
	ListNode* b = head->next;
	while (b != NULL &&b->next != NULL)
	{
		a = a->next;
		b = b->next->next;
	}
	b = a->next; a->next = NULL;
	return merge(sortList(head), sortList(b));
}