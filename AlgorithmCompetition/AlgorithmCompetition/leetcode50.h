double myPow(double x, int n)
{	
	unsigned long long n1 = n > 0 ? n : -n;
	double res = 1.0;
	while (n1)
	{
		if (n1 & 1)res *= x;
		x *= x;
		n1 >>= 1;
	}
	return n >= 0 ? res : 1.0 / res;
}