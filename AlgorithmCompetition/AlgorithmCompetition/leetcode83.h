#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};

ListNode* deleteDuplicates(ListNode* head) {
	if (head == NULL || head->next == NULL)return head;
	ListNode* first = new ListNode(0);
	first->next = head;
	ListNode* p = head;
	while (p->next)
	{
		if (p->val == p->next->val)
		{
			p->next = p->next->next;
		}
		else p = p->next;
	}
	return first->next;
}
