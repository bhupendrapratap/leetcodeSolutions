#include"Header.h"
void solve(int n)
{
	int i = 2;
	while (i <= n / 2)
	{
		if (n%i == 0)
		{
			n /= i;
			cout << i-- << endl;
		}
		i++;
	}
	cout << n << endl;
}

const int base = 1337;
int powmod(int a, int k)
{
	a %= base;
	int result = 1;
	for (int i = 0; i < k; ++i)
	{
		result = (result*a) % base;
	}
	return result;
}

int superPow(int a, vector<int>& b)
{
	if (b.empty())return 1;
	int last_digit = b.back();
	b.pop_back();
	return powmod(superPow(a, b), 10)*powmod(a, last_digit)%base;
}