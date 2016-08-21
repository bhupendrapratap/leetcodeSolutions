#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool valid(vector<int>& queen, int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		if (queen[i] == col || (queen[i] - i ==col - row) || (queen[i] +i == row+col))return false; //////attention please
	}
	return true;
}

void dfs(vector<vector<string>>& res, vector<int>& queen, int row, int n)
{
	if (row > n)return;
	else if (row == n)
	{
		vector<string>tmp;
		for (int i = 0; i < n; ++i)
		{
			string hang = "";
			for (int j = 0; j < n; ++j)
			{
				hang += j != queen[i] ? '.' : 'Q';
			}
			tmp.push_back(hang);
		}
		res.push_back(tmp);
	}
	else
	{
		for (int col = 0; col < n; ++col)
		{
			if (valid(queen, row, col))
			{
				queen[row] = col;
				dfs(res, queen, row+1,n);
				queen[row] = -1;
			}
		}
	}
}

vector<vector<string>> solveNQueens(int n) {
	vector<vector<string>>res;
	vector<int>queen(n,-1);
	dfs(res, queen, 0, n);
	cout << res.size() << endl;
	return res;
}