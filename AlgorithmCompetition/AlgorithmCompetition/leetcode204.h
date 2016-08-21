#include<vector>
using namespace std;


//must know
int countPrimes(int n) {
	if (n <= 2)return 0;
	n--;
	vector<int>prime(n + 1, 0);
	for (int i = 2; i <= n; ++i)
	{
		if (!prime[i])prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] <= n / i; ++j)
		{
			prime[prime[j] * i] = 1;
			if (i%prime[j] == 0)break;
		}
	}
	return prime[0];
}

int countprimes(int n)
{
	if (n < 2)return 0;
	vector<int>prime(n + 1, 0);
	for (int i = 2; i <= n; ++i)
	{
		if (!prime[i])prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] <= n / i; ++j)
		{
			prime[prime[j] * i] = 1;
			if (i%prime[j] == 0)break;
		}
	}
	return prime[0];
}