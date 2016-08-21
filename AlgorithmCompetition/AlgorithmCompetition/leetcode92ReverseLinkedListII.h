#include"Header.h"

/*
taobupt
2016-7-9
low-efficiency
*/

ListNode* reverseBetween(ListNode* head, int m, int n) {
	int i = 0;
	ListNode* first = new ListNode(0);
	ListNode* p = first;
	first->next = head;
	while (i<m-1)
	{
		p = p->next;
		i++;
	}
	ListNode* q=p;//the first node
	i++;
	p = p->next;
	ListNode* tail=new ListNode(0);
	while (i<=n)
	{
		ListNode* newNode = new ListNode(p->val);
		if (i == m)tail = newNode;
		newNode->next = q->next;
		q->next = newNode;
		p = p->next;
		i++;
	}
	tail->next = p;
	return first->next;

}