#include<cstdlib>
using namespace std;
#include<string>

bool isPalindrome(int x) {
	if (x < 0 ||(x!=0 && x%10==0))return false;
	int sum1 = 0;
	while (x > sum1)
	{
		sum1 = 10 * sum1 + x % 10;
		x /= 10;
	}
	return (x == sum1 || x == sum1 / 10);
}

bool isPalindrome1(int x)
{
	if (x < 0)return false;
	string s;
	while (x > 0)
	{
		s.push_back(x%10 + '0');
		x /= 10;
	}
	string ss(s.rbegin(), s.rend());
	return s == ss;
}
