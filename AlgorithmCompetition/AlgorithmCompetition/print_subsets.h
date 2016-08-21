#include "Header.h"
// void print_subset(vector<int>&nums, vector<int>&res)
//{
//	for (int i = 0; i < res.size(); ++i)printf("%d", res[i]);
//	printf("\n");
//	int s = res.size();
//	for (int i = s; i < nums.size(); ++i)
//	{
//		res.push_back(nums[i]);
//		print_subset(nums, res);
//		res.pop_back();
//	}
//}

void print_subset(vector<int> n, vector<int> &a) {
  // if (cur > n.size())return;
  for (int i = 0; i < a.size(); i++)
    printf("%d ", a[i]);
  printf("\n");
  int s =a.empty() ? 0 : lower_bound(n.begin(), n.end(), a.back()) - n.begin() + 1;
  for (int i = s; i < n.size(); i++) {
    a.push_back(n[i]);
    print_subset(n, a);
    a.pop_back();
  }
}

void print_subset1(int n, vector<int> a, int cur) {
  for (int i = 0; i < cur; i++)
    printf("%d ", a[i]);
  printf("\n");
  int s = a.empty() ? 0 : a.back() + 1;
  for (int i = s; i < n; i++) {
    a.push_back(i);
    print_subset1(n, a, cur + 1);
    a.pop_back();
  }
}


void print_subnets_helper(int n, int s)
{
	for (int i = 0; i < n; ++i)
	{
		if (s&(1 << i))
		{
			cout << i;
		}
	}
	cout << endl;
}

void print_subsets()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < (1 << n); ++i)
	{
		print_subnets_helper(n, i);
	}
}
