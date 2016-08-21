#include"Header.h"
int numDistinct(string s, string t) {
	int n = s.size() +1;
	int m = t.size() + 1;
	vector<vector<int>>dp(m, vector<int>(n, 0));
	for (int i = 0; i < n; ++i)dp[0][i] = 1;
	for (int j = 1; j < m; ++j)dp[j][0] = 1;
	for (int i = 1; i < m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			dp[i][j] = dp[i][j - 1];
			dp[i][j] += (s[j - 1] == t[i - 1] ? dp[i - 1][j - 1] : 0);//delete or no delete
		}
	}
	return dp[m - 1][n - 1];
}