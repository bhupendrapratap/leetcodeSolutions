#include<map>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
#include<string>
#include<vector>

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val = 0):val(val), next(NULL){}
};

class List
{
public:
	List(int arr[], int length);
	List(){ head = new ListNode(INT_MIN); }
	ListNode* GetHead(){ return head; }
	void print();
	void print(ListNode* );
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

private:
	ListNode* head;
};

List::List(int arr[], int length)
{
	head = new ListNode(INT_MIN);
	ListNode* p = new ListNode(arr[0]);
	head->next = p;
	for (int i = 1; i < length; ++i)
	{
		p->next = new ListNode(arr[i]);
		p = p->next;
	}
}

void List::print()
{
	ListNode* p = head->next;
	while (p)
	{
		cout << p->val << endl;
		p = p->next;
	}
}

void List::print(ListNode* start)
{
	ListNode* p = start->next;
	while (p)
	{
		cout << p->val << endl;
		p = p->next;
	}
}

ListNode* List::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* p = head;
	int extra = 0;
	while (l1 || l2 || extra)
	{
		int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
		extra = sum >= 10 ? 1 : 0;
		p->next = new ListNode(sum % 10);
		p = p->next;
		l1 = l1 ? l1->next : l1;
		l2 = l2 ? l2->next : l2;
	}
	return head->next;
}