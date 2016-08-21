#include"Header.h"
/*
@taobupt
2016-7-10
*/

struct twoNode
{
	ListNode* head;
	ListNode* tail;
};

twoNode* reverseList(ListNode*head, int length)
{
	ListNode* first = new ListNode(0);
	ListNode* newNode;
	ListNode* tail=new ListNode(0);
	int i = 0;
	while (i < length)
	{
		newNode = new ListNode(head->val);
		if (i == 0)
		{
			tail = newNode;
		}
		newNode->next = first->next;
		first->next = newNode;
		head = head->next;
		i++;
	}
	twoNode* ans=new twoNode();
	ans->head = first->next;
	ans->tail = tail;
	return ans;
}
ListNode* rotateRight(ListNode* head, int k) {
	if (head == NULL || head->next == NULL || k == 0)return head;
	ListNode*p = head;
	int n = 0,i=1;
	while (p)
	{
		n++;
		p = p->next;
	}
	k = n - (k%n);
	p = head;
	while (i <= k)
	{
		p = p->next;
		i++;
	}
	twoNode* secondpart=reverseList(p,n-k);
	twoNode* firstpart = reverseList(head, k);
	firstpart->tail->next = secondpart->head;
	return reverseList(firstpart->head, n)->head;
}


//direct ways

ListNode* rotateRight_neater(ListNode* head, int k) {
	if (head == NULL || head->next == NULL || k == 0)return head;
	ListNode* first = new ListNode(0);
	ListNode* p = head;
	first->next = head;
	int leng = 0;
	while (p)
	{
		leng++;
		p = p->next;
	}
	k = leng - k%leng;
	if (k == 0 || k == leng)return head;
	p = first;
	while (k--)
	{
		p = p->next;
	}
	ListNode*tmp = p->next; //store parttwo;
	p->next = NULL;
	p = tmp;
	while (p->next)
	{
		p = p->next;
	}
	p->next = head;
	return tmp;
}