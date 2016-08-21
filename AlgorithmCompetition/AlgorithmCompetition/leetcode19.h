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

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* first = new ListNode(0);
	first->next = head;
	ListNode* fast = head;
	ListNode* slow = first;
	for (int i = 1; i <= n; ++i)
	{
		fast = fast->next;
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	slow->next = slow->next->next;
	return first->next;
}

