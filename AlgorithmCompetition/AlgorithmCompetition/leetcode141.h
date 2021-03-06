#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL){}
};

bool hasCycle(ListNode* head)
{
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)return true;
	}
	return false;
}