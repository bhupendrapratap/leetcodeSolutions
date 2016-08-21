#include<math.h>

bool isPowerOfFour(int n) {
	if (n <= 0)return false;
	else return log10(n) / log10(4) - int(log10(n) / log10(4)) == 0 ? true : false;
}

bool isPowerOfFour1(int n)
{
	if (n <= 0)return false;
	if (n == 1 || n == 4)return true;
	return n % 3 == 0 ? isPowerOfFour1(n / 4) : false;
}

bool isPowerOfFour2(int n)//iteration is faster
{
	if (n <= 0)return false;
	while (n > 1)
	{
		if (n % 4 != 0)return false;
		else n /= 4;
	}
	return true;
}