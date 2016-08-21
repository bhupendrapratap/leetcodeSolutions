#include"Header.h"

int get_number(int i, int j, int m, int n, vector<vector<int>>& board)
{
	int count = 0;
	int o = i >= 1 ? i - 1 : 0, p = j >= 1 ? j - 1 : 0;
	while (o < m && o <= i + 1)
	{
		while (p < n && p <= j + 1)
		{
			if (!((p == j) && (o == i)))
			{
				if (board[o][p] == 1)count++;
			}
			p++;
		}
		p = j >= 1 ? j - 1 : 0;
		o++;
	}
	return count;
}
void gameOfLife(vector<vector<int>>& board)
{
	int m = board.size(),tmp=0;
	if (m == 0)return;
	int n = board[0].size();
	if (n == 0)return;
	vector<vector<int>>board1 = board;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			tmp = get_number(i, j, m, n, board1);
			if ((tmp < 2 ||  tmp>3) && board[i][j] == 1)board[i][j] = 0;
			else if (tmp == 3 && board[i][j] == 0)board[i][j] = 1;
		}
	}

	
}