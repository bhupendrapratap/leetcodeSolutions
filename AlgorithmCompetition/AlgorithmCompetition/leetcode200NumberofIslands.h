#include"Header.h"

void dfs(int i, int j, vector<vector<char>>& grid, vector < vector<bool>>& vis, vector<int>& dx, vector<int>& dy)
{
	for (int k = 0; k < 4; ++k)
	{
		int x = i + dx[k];
		int y = j + dy[k];
		if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == '0' || vis[x][y])continue;
		vis[x][y] = true;
		dfs(x, y, grid, vis, dx, dy);
	}
}
int numIslands(vector<vector<char>>& grid) {
	int ans = 0;
	if (grid.size() == 0 || grid[0].size() == 0)return 0;
	int m = grid.size(), n = grid[0].size();
	vector < vector<bool>>vis(m, vector<bool>(n, false));
	vector<int>dx{ 1, -1, 0, 0 };
	vector<int>dy{ 0, 0, 1, -1 };
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (grid[i][j] == '1' && !vis[i][j])
			{
				vis[i][j] = true;
				dfs(i, j, grid, vis, dx, dy);
				ans++;
			}
		}
	}
	return ans;
}