using namespace std;
#include<algorithm>
#include<functional>

int reverse(int x) {
	long long res = 0;
	//int flag = x >= 0 ? 1 : -1;
	while (x)
	{
		res = 10 * res + x % 10;
		x /= 10;
	}
	return (res>INT_MAX || res<INT_MIN) ? 0 : res;
}

int reverse_check(int x)
{
	int res = 0;
	while (x)
	{
		int newres = 10 * res + x % 10;
		if ((newres - (x % 10)) / 10 != res)return 0;
		res = newres;
		x /= 10;
	}
	return res;
}