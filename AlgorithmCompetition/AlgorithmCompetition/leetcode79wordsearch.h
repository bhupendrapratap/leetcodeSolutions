#include"Header.h"
bool dfs(vector<vector<char>>& board, int x, int y, vector<int>&dx, vector<int>&dy, string& word, int index, vector<vector<bool>>vis)
{
	if (index == word.size())return true;
	if (index > word.size())return false;
	for (int k = 0; k < 4; ++k)
	{
		int nx = x + dx[k];
		int ny = y + dy[k];
		if (nx < 0 || nx >= board.size() || ny < 0 || ny >= board[0].size())continue;
		if (!vis[nx][ny] && board[nx][ny] == word[index])
		{
			vis[nx][ny] = true;
			if (dfs(board, nx, ny, dx, dy, word, index + 1, vis))return true;
			vis[nx][ny] = false;
		}
	}

	return false;
}
bool exist(vector<vector<char>>& board, string word) {
	if (board.size() == 0 || board[0].size() == 0)return false;
	int m = board.size(), n = board[0].size();
	vector<vector<bool>>vis(m, vector<bool>(n, false));
	vector<int>dx{ 1, -1, 0, 0 }; vector<int>dy{ 0, 0, 1, -1 };
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (board[i][j] == word[0])
			{
				vis[i][j] = true;
				if (dfs(board, i, j, dx, dy, word, 1, vis))return true;
				vis[i][j] = false;
			}
		}
	}
	return false;
}