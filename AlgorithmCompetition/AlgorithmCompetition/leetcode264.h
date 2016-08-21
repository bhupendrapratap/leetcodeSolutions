#include<algorithm>
#include<vector>
using namespace std;
int nthUglyNumber(int n) {
	int number = 1, a = 1, b = 1, c = 1,begin=1,last=n;
	vector<int>res(n + 1, 1);
	while (--n > 0)
	{
		res[++begin] = min(min(2 * res[a], 3 * res[b]), 5 * res[c]);
		if (res[begin] >= res[a] * 2)a++;
		if (res[begin] >= res[b] * 3)b++;
		if (res[begin] >= res[c] * 5)c++;
	}
	return res[last];
}

int min3(int a, int b, int c)
{
	return a<b ? a<c ? a : c : b<c ? b : c;
}
int nthUglyNumber1(int n) {

	int a = 1, b = 1, c = 1;
	int last = n;
	vector<int>v(n + 1, 1);
	int begin = 1;
	while (--n>0)
	{

		v[++begin] = min3(v[a] * 2, v[b] * 3, v[c] * 5);
		if (v[begin] >= v[a] * 2)a++;
		if (v[begin] >= v[b] * 3)b++;
		if (v[begin] >= v[c] * 5)c++;
	}
	return v[last];
}

//review 2016-6-12

int nthuglynumber(int n)
{
	int number = 1, a = 1, b = 1, c = 1, begin=1, last = n;
	vector<int>res(n + 1, 1);
	while (--n>0)
	{
		res[++begin] = min(min(2 * res[a], 3 * res[b]), 5 * res[c]);
		if (res[begin] >= res[a] * 2)a++;
		if (res[begin] >= res[b] * 3)b++;
		if (res[begin] >= res[c] * 5)c++;
	}
	return res[last];
}