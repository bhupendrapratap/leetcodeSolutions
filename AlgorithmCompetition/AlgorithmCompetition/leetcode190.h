#include<stdint.h>
#include<string>
using namespace std;
uint32_t reverseBits(uint32_t n) {
	string res = "";
	while (n)
	{
		res.push_back(char(n % 2 + '0'));
		n /= 2;
	}
	string tmp(32 - res.size(), '0');
	res += tmp;
	int ret = 0;
	for (char c : res)
	{
		ret = 2 * ret + (c - '0');
	}
	return ret;
}

//review 2016-06-12

uint32_t reverseBits1(uint32_t n)
{
	string res = "";
	while (n)
	{
		res.push_back(char(n % 2 + '0'));
		n /= 2;
	}
	string tmp(32 - res.size(), '0');
	res += tmp;
	int ret = 0;
	for (char c : res)
	{
		ret = 2 * ret + (c - '0');
	}
	return ret;
}