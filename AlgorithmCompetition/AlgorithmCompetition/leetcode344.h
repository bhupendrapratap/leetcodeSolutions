#include"Header.h"
string reverseString(string s) {
	int n = s.size();
	if (n == 0)return s;
	for (int i = 0; i<n/2; ++i)
	{
		swap(s[i], s[n - 1 - i]);
	}
	return s;
}

string reverseString1(string s)
{
	reverse(s.begin(), s.end());
	//string ss(s.rbegin(),s.rend());
	//return ss;
	return s;
}