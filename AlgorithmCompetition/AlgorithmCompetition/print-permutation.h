#include"Header.h"

void print_permutation(int n, vector<int>&nums, int cur)
{
	if (cur == n)
	{
		for (int i = 0; i < n; ++i)printf("%d ", nums[i]);
		printf("\n");
		return;
	}
	else if (cur > n)return;
	else
	{
		
		for (int i = 1; i <= n; ++i)
		{
			int ok = 1;
			for (int j = 0; j < cur; ++j)
			{
				if (nums[j] == i)
				{
					ok = 0;
					break;
				}
			}
			if (ok)
			{
				nums.push_back(i);
				print_permutation(n, nums, cur + 1);
				nums.pop_back();
			}
		}
	}
}


void printPermutation(vector<vector<int>>&res, vector<int>&P, vector<int>&A)
{
	if (P.size() == A.size())
	{
		res.push_back(A);
		return;
	}
	else if (A.size()>P.size())return;
	else for (int i = 0; i<P.size(); ++i)
	{
		if (!i || P[i] != P[i - 1])
		{
			int c1 = 0, c2 = 0;
			for (int j = 0; j < A.size(); ++j)if (P[i] == A[j])c1++;
			for (int j = 0; j < P.size(); ++j)if (P[i] == P[j])c2++;
			if (c1 < c2)
			{
				A.push_back(P[i]);
				printPermutation(res, P, A);
				A.pop_back();
			}
		}
	}
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
	vector<vector<int>>res;
	vector<int>p;
	sort(nums.begin(), nums.end());
	printPermutation(res, nums, p);
	return res;
}


//void print_permutation1(int n, vector<int>&nums, int cur)
//{
//	if (cur == n+1)
//	{
//		for (int i = 0; i < n; ++i)printf("%d ", nums[i]);
//		printf("\n");
//		return;
//	}
//	else if (cur > n)return;
//	else
//	{
//
//		for (int i = cur; i <= n; ++i)
//		{
//			
//			nums.push_back(i);
//			print_permutation1(n, nums, cur + 1);
//			nums.pop_back();
//		}
//	}
//}


void print_nextpermutation()
{
	int n, p[10];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)scanf("%d", &p[i]);
	sort(p, p + n);
	do{
		for (int i = 0; i < n; ++i)printf("%d ", p[i]);
		printf("\n");
	} while (next_permutation(p, p + n));
}