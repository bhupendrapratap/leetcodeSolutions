#include<string>
using namespace std;

int titleToNumber(string s) {
	int res = 0, length = s.size();
	for (int i = length - 1; i >= 0; --i)
	{
		res += (s[i] - 'A' + 1)*int(pow(26, length - 1 - i));
	}
	return res;
}
int titleToNumber_neater(string s) {
	int digit = s.length();
	int num = 0;
	for (int i = 0; i < digit - 1; i++)
	{
		num += s[i] - 'A' + 1;
		num *= 26;
	}
	return (num + s[digit - 1] - 'A' + 1);
}