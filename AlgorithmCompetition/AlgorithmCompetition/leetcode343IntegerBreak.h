#include"Header.h"
int integerBreak(int n)
{
	int res = 1;
	if (n <= 3)return n - 1;
	while (n > 4)
	{
		res *= 3;
		n -= 3;
	}
	return res*n;
}