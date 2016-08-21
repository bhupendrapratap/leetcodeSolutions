#include"Header.h"
int minPathSum(vector<vector<int>>& grid) {
	if (grid.size() == 0 || grid[0].size() == 0)return 0;
	int m = grid.size(), n = grid[0].size();
	for (int i = n - 2; i >= 0; --i)grid[m - 1][i] += grid[m - 1][i + 1];
	for (int j = m - 2; j >= 0; --j)grid[j][n-1] += grid[j+1][n-1];
	for (int i = m - 2; i >= 0; --i)
	{
		for (int j = n - 2; j >= 0; --j)
		{
			grid[i][j] += min(grid[i + 1][j], grid[i][j + 1]);
		}
	}
	return grid[0][0];
}