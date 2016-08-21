#include"Header.h"
ListNode *detectCycle(ListNode *head) {
	if (head == NULL && head->next==NULL)return NULL;
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)break;
	}
	if (slow != fast)return NULL;
	while (head != slow)
	{
		head = head->next;
		slow=slow->next;
	}
	return head;
}