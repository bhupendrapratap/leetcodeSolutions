#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val) :val(val), next(NULL){}
};

bool isPalind(vector<int>& v)
{
	int n = v.size();
	for (int i = 0; i <= n / 2; ++i)
	{
		if (v[i] != v[n - 1 - i])return false;
	}
	return true;
}
bool isPalindrome(ListNode* head) {
	if (head == NULL || head->next == NULL)return true;
	vector<int>v;
	ListNode* p = head;
	while (p)
	{
		v.push_back(p->val);
		p = p->next;
	}
	return isPalind(v);
}