#include"Header.h"
void rotate(vector<vector<int>>& matrix) {
	vector<vector<int> >v(matrix);
	int n = matrix.size();
	for (int i = 0; i<n; ++i)
	{
		for (int j = 0; j<n; ++j)
		{
			matrix[i][j] = v[n - j - 1][i];
		}
	}
}