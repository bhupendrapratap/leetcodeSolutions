#include<math.h>
bool isPowerOfTwo(int n) {
	if (n <= 0)return false;
	int count = 0;
	while (n)
	{
		count++;
		n &= n - 1;
		if (count>1)return false;
	}
	if (count == 1)return true;
}

bool isPowerOfTwo1(int n) {
	if (n <= 0)return false;
	else return log10(n) / log10(2) - int(log10(n) / log10(2)) == 0 ? true : false;
}

bool isPowerOfTwo2(int n)
{
	if (n<=0)return false;
	if (n == 1 || n==2)return true;
	return n%2==0?isPowerOfTwo2(n / 2):false;

}