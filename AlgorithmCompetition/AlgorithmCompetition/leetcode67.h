#include"Header.h"
string addBinary(string a, string b) {
	string res = "";
	int extra = 0, m = a.size(), n = b.size(),i=0,sum1=0;
	while (i < m || i < n || extra)
	{
		sum1 = (i<m?a[m - 1 - i] - '0':0) +(i<n?b[n - i - 1] - '0':0) + extra;
		extra = sum1 >= 2 ? 1 : 0;
		res.push_back(char(sum1 % 2 + '0'));
		i++;
	}
	reverse(res.begin(), res.end());
	return res;

}