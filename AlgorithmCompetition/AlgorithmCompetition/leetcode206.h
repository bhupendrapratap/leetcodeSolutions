#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val),next(NULL){}
};
ListNode* reverseList(ListNode* head)
{
	if (head == NULL || head->next == NULL)return head;
	ListNode* first = new ListNode(0);
	while (head)
	{
		ListNode* p = new ListNode(head->val);
		head = head->next;
		p->next = first->next;
		first->next = p;
	}
	return first->next;
}