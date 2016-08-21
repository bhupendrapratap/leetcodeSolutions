#include"Header.h"
ListNode* partition(ListNode* head, int x) {
	ListNode* small = new ListNode(0);
	ListNode* great = new ListNode(0);
	ListNode* p = head;
	ListNode* s = small;
	ListNode* g = great;
	while (p)
	{
		if (p->val<x)
		{
			s->next = p;
			s = s->next;
		}
		else
		{
			g->next = p;
			g = g->next;
		}
		p = p->next;
	}
	s->next = great->next;
	g->next = NULL;
	return small->next;
}