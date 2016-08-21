#include"Header.h"
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int m = matrix.size();
	if (m == 0)return false;
	int n = matrix[0].size();
	if (n == 0)return false;
	int left = 0, right = m*n - 1, mid = 0, x = 0, y = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		x = mid / n, y = mid%n;
		if (matrix[x][y] == target)return true;
		else if (matrix[x][y]>target)right = mid - 1;
		else left = mid + 1;
	}
	return false;
}