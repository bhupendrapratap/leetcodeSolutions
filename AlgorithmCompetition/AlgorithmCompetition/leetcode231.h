#include<math.h>

bool isPowerOfThree(int n) {
	if (n <= 0)return false;
	else return log10(n) / log10(3) - int(log10(n) / log10(3)) == 0 ? true : false;
}

bool isPowerOfThree1(int n)
{
	if (n <= 0)return false;
	if (n == 1 || n == 3)return true;
	return n % 3 == 0 ? isPowerOfThree1(n / 3) : false;
}

bool isPowerOfThree2(int n)//iteration is faster
{
	if (n <= 0)return false;
	while (n > 1)
	{
		if (n % 3 != 0)return false;
		else n /= 3;
	}
	return true;
}