#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};
void deleteNode(ListNode* node) {
	if (node == NULL)return;
	node->val = node->next->val;
	node->next = node->next->next;
}