#include"Header.h"
ListNode* insertionSortList(ListNode* head) {
	if (head == NULL || head->next == NULL)return head;
	ListNode* first = new ListNode(0);
	ListNode* p = head->next;
	ListNode* q = first->next;
	first->next = new ListNode(head->val);
	while (p)
	{
		q = first->next;
		if (q->val > p->val)
		{
			ListNode* tmp = new ListNode(p->val);
			tmp->next = first->next;
			first->next = tmp;
		}
		else
		{
			while (q&&q->next)
			{
				if (q->val <= p->val && q->next->val >= p->val)
				{
					ListNode* tmp = new ListNode(p->val);
					tmp->next = q->next;
					q->next = tmp;
					break;
				}
				q = q->next;
			}
			if (q->next == NULL)q->next = new ListNode(p->val);
		}
		p = p->next;
	}
	return first->next;
}