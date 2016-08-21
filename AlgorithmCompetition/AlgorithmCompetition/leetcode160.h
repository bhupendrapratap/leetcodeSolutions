#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	if (headA == NULL || headB == NULL)return NULL;
	int la = 0, lb = 0;
	ListNode* p = headA;
	ListNode* q = headB;
	while (p || q)
	{
		if (p){ la++; p = p->next; }
		if (q){ lb++, q = q->next; }
	}
	p = headA; q = headB;
	int le = la - lb;
	if (le > 0){ while (le--) p = p->next; }
	else { le = abs(le); while (le--)q = q->next; } //////attention this else,or if you use if then you will get wrong answer
	while (p && q)
	{
		if (p == q)return p;
		p = p->next;
		q = q->next;
	}
	return NULL;
}
