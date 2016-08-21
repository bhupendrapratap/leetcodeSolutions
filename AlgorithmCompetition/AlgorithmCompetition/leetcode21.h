#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val = 0) :val(val), next(NULL){}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* first = new ListNode(0);
	ListNode* p = first;
	while (l1 && l2)
	{
		if (l1->val > l2->val){ p->next = l2; l2 = l2->next; }
		else{ p->next = l1; l1 = l1->next; }
		p = p->next;
	}
	p->next = l1 ? l1 : l2;
	return first->next;
}

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	if (l1 == NULL || l2 == NULL)return NULL;
	if (l1->val > l2->val)
	{
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}
	else
	{
		l2->next = mergeTwoLists(l2->next, l1);
		return l2;
	}
}