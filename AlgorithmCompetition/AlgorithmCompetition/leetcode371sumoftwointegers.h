#include"Header.h"
int getSum(int a, int b)
{
	int sum1 = 0, carry = 0;
	while (b != 0)
	{
		sum1 = a^b;
		carry = (a&b) << 1;
		a = sum1;
		b = carry;
	}
	return a;
}