#include"Header.h"
int coinChange(vector<int>& coins, int amount) {
	sort(coins.begin(), coins.end());
	vector<int>dp(amount + 1, 0);// if 
	int n = coins.size();
	for (int i = 1; i <= amount; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i >= coins[j] && dp[i] >= dp[i - coins[j]] + 1)
			{
				dp[i] = dp[i - coins[j]] + 1;
			}
		}
	}
	return dp[amount]==0?-1:dp[amount]; //this case does can not pass [1],0
}

int coinChange_correct(vector<int>& coins, int amount) {
	sort(coins.begin(), coins.end());
	vector<int>dp(amount + 1, amount+1);// if
	dp[0] = 0;
	int n = coins.size();
	for (int i = 1; i <= amount; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i >= coins[j] && dp[i] >= dp[i - coins[j]] + 1)
			{
				dp[i] = dp[i - coins[j]] + 1;
			}
		}
	}
	return dp[amount] == amount+1 ? -1 : dp[amount]; //this case does can not pass [1],0
}


