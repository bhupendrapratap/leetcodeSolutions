#include<string>
#include<math.h>
using namespace std;
string getPermutation(int n, int k) {
	int i = 1,fac=0;
	string res = "",tmp="";
	int a[10] = { 1 };
	for (int i = 1; i < 10; ++i)a[i] = i*a[i - 1];
	while (i < n)
	{
		fac = a[n - i];
		if (k%fac == 0)
		{
			tmp.clear();
			for (int j = 1; j <=n; ++j)
			{
				if (res.find(char(j + '0')) < 9)continue;
				else tmp.push_back(char('0' + j));
			}
			res.push_back(tmp[k/fac-1]);
			for (int j = n; j >= 1; --j)
			{
				if (res.find(char(j + '0'))<9)continue;
				res.push_back(char(j + '0'));
			}
			return res;
		}
		else
		{
			tmp.clear();
			for (int j = 1; j <= n; ++j)
			{
				if (res.find(char(j + '0')) < 9)continue;
				else tmp.push_back(char('0' + j));
			}
			res.push_back(tmp[int(k/fac)]);
			k = k%fac;
		}
		i++;
	}
	return res;
}


//neater,better
string getPermutation1(int n, int k) {
	int j = 1, fac = 0;
	k--;
	string res = "", tmp = "";
	for (int i = 1; i <= n; ++i)tmp.push_back(i + '0');
	int a[10] = { 1 };
	for (int i = 1; i < 10; ++i)a[i] = i*a[i - 1];
	while (j <=n)
	{
		fac = a[n - j];
		int index = int(k / fac);
		res.push_back(tmp[index]);
		tmp.erase(tmp.begin() + index);
		k = k%fac;
		j++;
	}
	return res;
}



//review 2016-6-12

string getpermuation1(int n, int k)
{
	int j = 1, fac = 0;
	k--;
	string res = "", tmp = "";
	int a[10] = { 1 };
	for (int i = 1; i < 10; ++i)a[i] = a[i - 1] * i;
	while (j <= n)
	{
		fac = a[n - j];
		int index = int(k / fac);
		res.push_back(tmp[index]);
		tmp.erase(tmp.begin() + index);
		k = k%fac;
		j++;
	}
	return res;
}