#include"Header.h"
vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>>a(n, vector<int>(n, 0));
	if (n == 0)return a;
	int x = 0, y = 0, tot = 0;
	tot = a[x = 0][y =0] = 1;
	while (tot < n*n)
	{
		while (y + 1 < n && !a[x][y + 1])a[x][++y] = ++tot;
		while (x + 1 < n && !a[x + 1][y])a[++x][y] = ++tot;
		while (y - 1 >= 0 && !a[x][y - 1])a[x][--y] = ++tot;
		while (x - 1 >= 0 && !a[x - 1][y])a[--x][y] = ++tot;

	}
	return a;
}