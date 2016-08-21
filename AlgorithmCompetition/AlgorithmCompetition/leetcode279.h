#include<vector>
using namespace std;
int numSqaures(int n)
{
	vector<int>coins;
	int i = 1;
	while (i*i <= n)
	{
		coins.push_back(i*i);
		++i;
	}
	vector<int>dp(n + 1, n + 1);
	dp[0] = 0;
	for (int v = 1; v <= n; ++v)
	{
		for (int i = 0; i < coins.size(); ++i)
		{
			if (v >= coins[i] && dp[v] >= dp[v - coins[i]] + 1)
			{
				dp[v] = dp[v - coins[i]] + 1;
			}
		}
	}
	return dp[n];
}

//review

int num(int n)
{
	vector<int>coins;
	int i = 1;
	while (i*i <= n)
	{
		coins.push_back(i*i);
		++i;
	}
	vector<int>dp(n + 1, n + 1);
	dp[0] = 0;
	for (int v = 1; v <= n; ++v)
	{
		for (int i = 0; i < coins.size(); ++i)
		{
			if (v >= coins[i] && dp[v] >= dp[v - coins[i]] + 1)
			{
				dp[v] = dp[v - coins[i]] + 1;
			}
		}
	}
	return dp[n];
}