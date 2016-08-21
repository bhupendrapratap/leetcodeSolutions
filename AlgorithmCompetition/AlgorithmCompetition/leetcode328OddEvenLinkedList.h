#include"Header.h"
ListNode* oddEvenList(ListNode* head)
{
	if (head == NULL || head->next == NULL)return head;
	ListNode* p = head;
	ListNode* q = head->next;
	ListNode* even = q;
	while (q && q->next)
	{
		p->next = q->next;
		p = p->next;
		q->next = p->next;
		q = q->next;
	}
	p->next = even;
	return head;
}