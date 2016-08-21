#include"Header.h"
vector<int> getRow(int numRows) {
	vector<vector<int>>res;
	res.push_back({ 1 });
	vector<int>inner;
	for (int i = 1; i <=numRows; ++i)
	{
		inner.clear();
		inner.push_back(1);
		for (int j = 1; j<i; ++j)
		{
			inner.push_back(res[i - 1][j - 1] + res[i - 1][j]);
		}
		inner.push_back(1);
		res.push_back(inner);
	}
	return res[numRows];
}