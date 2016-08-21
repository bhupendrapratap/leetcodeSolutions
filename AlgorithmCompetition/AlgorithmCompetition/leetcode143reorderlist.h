#include"Header.h"
void reorderList(ListNode* head) {
	if (head == NULL || head->next == NULL)return;
	vector<int>v;
	ListNode* first = new ListNode(0);
	ListNode* p = head;
	while (p)
	{
		v.push_back(p->val);
		p = p->next;
	}
	p = head;
	int i = 1, j = v.size() - 1;
	while (i <= j)
	{
		p->next = new ListNode(v[j--]);
		p = p->next;
		if (i <= j)
		{
			p->next = new ListNode(v[i++]);
			p = p->next;
		}
	}
	head = first->next;
}