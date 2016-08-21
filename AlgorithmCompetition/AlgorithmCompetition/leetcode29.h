
//pay attention to the edge case
int divide(int dividend, int divisor) {
	if (dividend == 0)return 0;
	if (divisor == 0)return INT_MAX;
	int sign_dividend = dividend > 0 ? 1 : -1;
	int sign_divisor = divisor > 0 ? 1 : -1;
	unsigned int divd =abs(dividend);
	unsigned int  divs = abs(divisor);
	if (divs == 1)
	{
		if (sign_dividend*sign_divisor == 1)return divd > INT_MAX ? INT_MAX : divd;
	}
	int res = 0;
	while (divd >= divs)
	{
		int i = 0;
		unsigned int c = divs;
		while (divd >= c)
		{
			divd -= c;
			c = c <<= 1;
			res+= 1<<i;
			i++;
		}
	}
	return sign_dividend*sign_divisor*res;
}

int divide_neater(int dividend, int divisor) {
	if (!divisor || (dividend == INT_MIN && divisor == -1))
		return INT_MAX;
	int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
	long long dvd = labs(dividend);
	long long dvs = labs(divisor);
	int res = 0;
	while (dvd >= dvs) {
		long long temp = dvs, multiple = 1;
		while (dvd >= (temp << 1)) {
			temp <<= 1;
			multiple <<= 1;
		}
		dvd -= temp;
		res += multiple;
	}
	return sign == 1 ? res : -res;
}