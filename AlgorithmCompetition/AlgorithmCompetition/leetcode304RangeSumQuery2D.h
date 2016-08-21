#include"Header.h"
class NumMatrix
{
public:
	vector<vector<int>>dp;
	NumMatrix(vector<vector<int>>& matrix)
	{
		dp = matrix;
		int m = matrix.size();
		if (m == 0)return;
		int n = matrix[0].size();
		if (n == 0)return;
		for (int i = 0; i < m - 1; ++i)dp[i + 1][0] += dp[i][0];
		for (int j = 0; j < n - 1; ++j)dp[0][j] += dp[0][j];
		for (int i = 1; i < m; ++i)
		{
			for (int j = 1; j < n; ++j)
			{
				dp[i][j] = matrix[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			}
		}
	}
	int sumRegiion(int row1, int col1, int row2, int col2)
	{
		if (col1 >= 1 && row1 >= 1)return dp[row2][col2] + dp[row1 - 1][col1 - 1] - dp[row2][col1 - 1] - dp[row1 - 1][col2];
		else if (col1 >= 1 && row1<1)return dp[row2][col2] - dp[row2][col1 - 1];
		else if (col1 < 1 && row1 >= 1)return dp[row2][col2] - dp[row1 - 1][col2];
		else return dp[row2][col2];
	}
};