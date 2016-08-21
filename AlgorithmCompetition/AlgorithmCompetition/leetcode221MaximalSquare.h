#include"Header.h"
int maximalSquare(vector<vector<char>>& matrix) {
	if (matrix.size() == 0 || matrix[0].size() == 0)return 0;
	int m = matrix.size(), n = matrix[0].size(), ma = 0;
	vector<vector<int>>dp(m, vector<int>(n, 0));
	for (int i = 0; i < m; ++i)
	{
		if (matrix[i][0] == '1')
		{
			dp[i][0] = 1;
			ma = 1;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (matrix[0][i] == '1')
		{
			dp[0][i] = 1;
			ma = 1;
		}
	}
	for (int i = 1; i < m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			dp[i][j] = matrix[i][j] == 1 ? 1 + min(min(dp[i - 1][j - 1], dp[i - 1][j]), dp[i][j - 1]) : 0;
			ma = max(ma, dp[i][j]);
		}
	}
	return ma*ma;
}