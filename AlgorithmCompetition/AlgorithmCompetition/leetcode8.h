#include<cstdlib>
#include<string>
using namespace std;
int myAtoi(string str) {
	if (str.size() == 0)return 0;
	int i = 0, sign = 1;
	long long base = 0;
	while (str[i] == ' ')i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = str[i++] == '+' ? 1 : -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + str[i++] - '0';
		if (base > INT_MAX || base<INT_MIN)break;
	}
	base = sign*base;
	base = base>INT_MAX ? INT_MAX : base;
	base = base<INT_MIN ? INT_MIN : base;
	return base;
}

int myAtoi_neater(string str)
{
	int sign = 1, i = 0, base = 0;
	while (str[i] == ' ')i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] > '7'))return sign == 1 ? INT_MAX : INT_MIN;
		base = 10 * base + str[i] - '0';
	}
	return base*sign;
}