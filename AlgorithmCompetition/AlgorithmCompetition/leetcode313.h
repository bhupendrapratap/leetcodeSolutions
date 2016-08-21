#include<vector>
#include<algorithm>
using namespace std;
int nthSuperUglyNumber(int n, vector<int>& primes)
{
	vector<int>index(primes.size(), 1);
	int last = n, begin = 1;
	vector<int>res(n + 1, 1);
	while (--n > 0)
	{
		int min_number = INT_MAX;
		for (int i = 0; i < primes.size(); ++i)
		{
			min_number = min(min_number, res[index[i]] * primes[i]);
		}
		res[++begin] = min_number;
		for (int i = 0; i < primes.size(); ++i)if (res[begin]>res[index[i]] * primes[i])index[i]++;
	}
	return res[last];
}


//review 2016-6-12
int nthsuper(int n, vector<int>& primes)
{
	vector<int>index(primes.size(), 1);
	int last = n, begin = 1;
	vector<int>res(n + 1, 1);
	while (--n > 0)
	{
		int min_number = INT_MAX;
		for (int i = 0; i < primes.size(); ++i)
		{
			min_number = min(min_number, res[index[i]] * primes[i]);
		}
		res[++begin] = min_number;
		for (int i = 0; i < primes.size(); ++i)if (res[begin]>res[index[i]] * primes[i])index[i]++;
	}
	return res[last];
}