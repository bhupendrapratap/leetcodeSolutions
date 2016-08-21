#include"Header.h"
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
	if (obstacleGrid.size() == 0 || obstacleGrid[0].size() == 0)return 0;
	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
	if (obstacleGrid[m - 1][n - 1])return 0;
	vector<vector<int>>dp(m, vector<int>(n, 1));
	for (int j = n - 2; j >= 0; --j)dp[m - 1][j] = (obstacleGrid[m - 1][j]) == 0 && (dp[m - 1][j + 1] == 1) ? 1 : 0;
	for (int j = m - 2; j >= 0; --j)dp[j][n - 1] = (obstacleGrid[j][n - 1]) == 0 && (dp[j + 1][n - 1] == 1) ? 1 : 0;
	for (int i = m - 2; i >= 0; --i)
	{
		for (int j = n - 2; j >= 0; --j)
		{
			dp[i][j] = obstacleGrid[i][j] == 0 ? dp[i + 1][j] + dp[i][j + 1] : 0;
		}
	}
	return dp[0][0];
}