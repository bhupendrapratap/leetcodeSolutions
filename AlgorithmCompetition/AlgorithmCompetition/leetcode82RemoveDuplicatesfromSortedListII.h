#include"Header.h"
ListNode* deleteDuplicates(ListNode* head) {
	ListNode* first = new ListNode(0);
	ListNode* p = first;
	ListNode* q = head;
	first->next = head;
	while (q&&q->next)
	{
		if (q->val == q->next->val)
		{
			while (q&&q->next)
			{
				if (q->val != q->next->val)break;
				q = q->next;
			}
			p->next = q ? q->next : NULL;
			q = q ? q->next : NULL;
			//p = p->next;
		}
		else
		{
			q = q->next;
			p = p->next;
		}
	}
	return first->next;
}