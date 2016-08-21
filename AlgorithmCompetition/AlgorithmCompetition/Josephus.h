#include"Header.h"
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int val=0) :val(val), next(NULL){}
};

int JosephusProblem(int n, int m)////bian hao 1~n,bao dao m delete
{
	if (m < 1 || n < 1)return -1;
	ListNode* head = new ListNode(1);
	ListNode* current = head;
	ListNode* former = NULL;
	for (int i = 2; i <=n; ++i)
	{
		current->next = new ListNode(i);
		current = current->next;
	}
	current->next = head;
	former = current;
	current = head;
	while (current->next != current)
	{
		for (int i = 0; i < m-1; ++i)
		{
			former = current;
			current = current->next;
		}
		former->next = current->next;
		delete current;
		current = former->next;
	}
	int result = current->val;
	delete current;
	return result;
}

int JosephusProblem_Solution4(int n, int m)////bian hao 1~n,bao dao m delete
{
	if (n < 1 || m < 1)
		return -1;

	vector<int> f(n + 1, 0);
	for (unsigned i = 2; i <= n; i++)
		f[i] = (f[i - 1]+m) % i;

	return f[n]+1;
}

int JosephusProblem_Solution4(int n, int m)////bian hao 0~n-1,bao dao m-1 delete
{
	if (n < 1 || m < 1)
		return -1;

	vector<int> f(n + 1, 0);
	for (unsigned i = 2; i <= n; i++)
		f[i] = (f[i - 1] + m) % i;

	return f[n];
}


int step = 1;
void move(int n, char from, char to)
{
	printf("the %d step: move %d disk %c ---->%c\n", step++, n, from, to);
}

void hanoi(int n, char from, char depend_on, char to)
{
	if (n == 1)move(1, from, to);
	else
	{
		hanoi(n - 1, from, to, depend_on);// depend_on has n-1 disks
		move(n, from, to);//move the biggest 
		hanoi(n-1,depend_on, from, to);//move dependon's disks to "to" by from
	}
}