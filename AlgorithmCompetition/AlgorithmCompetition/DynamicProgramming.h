#include"Header.h"
//split steer question

int bottom_up_cut(vector<int>& p, int n)
{
	vector<int>dp(n+1, 0);
	vector<int>solution(n + 1, 0);
	int q = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		q = INT_MIN;
		for (int j = 0; j <= i; ++j)
		{
			if (q < p[j] + dp[i - j])
			{
				q = p[j] + dp[i - j];
				solution[i] = j;
			}
		}
		dp[i] = q;
	}
	return dp[n];
}