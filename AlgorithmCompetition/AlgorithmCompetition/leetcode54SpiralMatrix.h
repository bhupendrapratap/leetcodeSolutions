#include"Header.h"
vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int>res;
	if (matrix.size() == 0 || matrix[0].size() == 0)return res;
	int m = matrix.size(), n = matrix[0].size();
	vector<vector<bool>>vis(m, vector<bool>(n, false));
	int i = 0, j = 0;
	int total = m*n;
	res.push_back(matrix[0][0]);
	while (res.size()<total)
	{
		while (j + 1 < n && !vis[i][j + 1])
		{
			res.push_back(matrix[i][++j]);
			vis[i][j-1] = true;
		}

		while (i + 1 < m && !vis[i+1][j])
		{
			res.push_back(matrix[++i][j]);
			vis[i - 1][j] = true;
		}

		while (j-1 >=0 && !vis[i][j-1])
		{
			res.push_back(matrix[i][--j]);
			vis[i][j+1] = true;
		}

		while (i-1>=0 && !vis[i-1][j])
		{
			res.push_back(matrix[--i][j]);
			vis[i+1][j] = true;
		}
	}
	return res;
}

#define maxn 4
int a[maxn][maxn];
void solve()
{
	int n = 4, x = 0, y = n - 1, tot = 0;
	memset(a, 0, sizeof(a));
	tot = a[x = 0][y = n - 1] = 1;
	while (tot < n*n)
	{
		while (x + 1 < n && !a[x + 1][y])a[++x][y] = ++tot;
		while (y-1>=0 && !a[x ][y-1])a[x][--y] = ++tot;
		while (x - 1 >=0 && !a[x - 1][y])a[--x][y] = ++tot;
		while (y + 1 < n && !a[x ][y+1])a[x][++y] = ++tot;
	}

}
