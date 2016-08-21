#include<unordered_map>
#include<string>
using namespace std;

int getsum(int n)//no string_convert are allowed ,too slow
{
	string x = to_string(n);
	int res = 0;
	for (char i : x)
	{
		res += (i - '0')*(i - '0');
	}
	return res;
}
bool isHappy(int n) {
	unordered_map<int, int>mp;
	int x = n;
	while (x!=1)
	{
		if (mp.count(x))return false;
		mp[x] = x;
		x = getsum(x);
	}
	return true;
}

//loop chase way

int getsquare(int n)
{
	int res = 0;
	while (n)
	{
		int tmp = n % 10;
		res += tmp*tmp;
		n /= 10;
	}
	return res;
}


bool ishappy(int n)
{
	int slow = n, fast = n;
	do{
		slow = getsquare(slow);
		fast = getsquare(getsquare(fast));
	} while (fast != slow);
	return fast == 1 ? true : false;
}


