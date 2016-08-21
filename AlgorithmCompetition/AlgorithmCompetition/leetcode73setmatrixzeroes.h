#include"Header.h"
void setZeroes(vector<vector<int>>& matrix) {
	if (matrix.size() == 0 || matrix[0].size() == 0)return;
	int m = matrix.size(), n = matrix[0].size();
	vector<pair<int, int>>coordinate;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (matrix[i][j] ==0)coordinate.push_back(make_pair(i, j));
		}
	}
	int length = coordinate.size();
	for (int i = 0; i <length ; ++i)
	{
		for (int j = 0; j < n; ++j)matrix[coordinate[i].first][j] = 0;
		for (int k = 0; k < m; ++k)matrix[k][coordinate[i].second] = 0;
	}
}