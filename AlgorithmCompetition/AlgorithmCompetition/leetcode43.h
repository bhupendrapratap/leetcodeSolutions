#include<string>
using namespace std;
#include<vector>
string multiply(string num1, string num2) {
	/*int number =0;
	while (num1[number++] == '0')
	num1 = num1.substr(number-1);
	number = 0;
	while (num2[number++] == '0');
	num2 = num2.substr(number-1);*/
	if (num1.size()<num2.size())swap(num1, num2);
	int length1 = num1.size(), length2 = num2.size();
	if (length2 == 1 && num2[0] == '0')return num2;
	vector<string>v(length2, "");
	for (int i = 0; i<length2; ++i)
	{
		int extra = 0, sum1 = 0;
		for (int j = length1-1; j>=0; --j)
		{
			sum1 = (num1[j] - '0')*(num2[length2-1-i] - '0') + extra;
			extra = sum1/10;
			v[i] = char(sum1 % 10 + '0') + v[i];
		}
		if (extra)v[i] = char(extra + '0') + v[i];
		string zeros(i, '0');
		v[i] += zeros;
	}
	string res = "";
	int carry = 0,i=0,length3=v[length2-1].size();
	while (i < length3)
	{
		int sum2 = carry;
		for (int j = 0; j < length2; ++j)
		{
			if (i >= v[j].size())continue;
			sum2 += (v[j][v[j].size() - 1 - i] - '0');
		}
		carry = sum2 / 10;
		res = char(sum2 % 10 + '0') + res;
		i++;
	}
	if (carry)res = char(carry + '0') + res;
	return res;
}