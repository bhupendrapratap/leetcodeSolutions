#include"Header.h"

//while the rest numbers of part two are exactly symmetric of part one.It is easy to see its correctness.
vector<int> grayCode(int n) {
	vector<int>res;
	res.push_back(0);
	for (int i = 0; i < n; ++i)
	{
		int size = res.size();
		for (int k = size - 1; k >= 0; --k)
		{
			res.push_back(res[k] | 1 << i);
		}
	}
	return res;
}