/*
@taobupt
leetcode130
*/
#include"Header.h"
void solve(vector<vector<char>>& board) {
	if (board.size() == 0 || board[0].size() == 0)return;
	int m = board.size(), n = board[0].size();
	vector<vector<bool>>vis(m, vector<bool>(n, false));
	vector<int>dx{ 1, -1, 0, 0 };
	vector<int>dy{ 0, 0, 1, -1 };
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (board[i][j] == 'X' || vis[i][j])continue;
			queue<pair<int, int>>q;
			queue<pair<int, int>>q1;
			bool flag = true;
			q.push(make_pair(i, j));
			q1.push(make_pair(i, j));
			vis[i][j] = true;
			while (!q.empty())
			{
				int curx = q.front().first, cury = q.front().second;
				q.pop();
				for (int k = 0; k < 4; ++k)
				{
					int nx = curx + dx[k], ny = cury + dy[k];
					if (nx < 0 || ny < 0 || nx >= m || ny >= n)
					{
						flag = false;
						continue;
					}
					if (vis[nx][ny] || board[nx][ny] == 'X')continue;
					vis[nx][ny] = true;
					q.push(make_pair(nx, ny));
					q1.push(make_pair(nx, ny));
				}
			}
			if (flag)
			{
				while (!q1.empty())
				{
					int xx = q1.front().first, yy = q1.front().second;
					board[xx][yy] = 'X';
					q1.pop();
				}
			}
		}

	}
	return;
}


//revierw 2016-7-31

void solve_review(vector<vector<char>>& board) {
	if (board.size() == 0 || board[0].size() == 0)return;
	int m = board.size(), n = board[0].size();
	vector<vector<bool>>vis(m, vector<bool>(n, false));
	vector<int>dx{ 1, -1, 0, 0 };
	vector<int>dy{ 0, 0, 1, -1 };
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (vis[i][j]||board[i][j] == 'X')continue;
			queue<pair<int, int>>q1;
			queue<pair<int, int>>q2;
			int flag = true;
			q1.push(make_pair(i, j));
			q2.push(make_pair(i, j));
			vis[i][j] = false;
			while (!q1.empty())
			{
				int x = q1.front().first, y = q1.front().second;
				q1.pop();
				for (int k = 0; k < 4; ++k)
				{
					int nx = x + dx[k], ny = y + dy[k];
					if (nx < 0 || nx >= m || ny < 0 || ny >= n)
					{
						flag = false;
						continue;
					}
					if (vis[nx][ny] || board[nx][ny] == 'X')continue;
					vis[nx][ny] = true;
					q1.push(make_pair(nx, ny));
					q2.push(make_pair(nx, ny));
				}
				

			}
			if (flag)
			{
				while (!q2.empty())
				{
					int xx = q2.front().first, yy = q2.front().second;
					board[xx][yy] = 'X';
					q2.pop();
				}
			}
		}
	}
}