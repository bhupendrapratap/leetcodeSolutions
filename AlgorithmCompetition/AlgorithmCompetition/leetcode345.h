#include"Header.h"
string reverseVowels(string s)
{
	map<char, int>mp;
	mp['a'] = 1, mp['e'] = 2, mp['i'] = 3, mp['o'] = 4, mp['u'] = 5, mp['A'] = 6, mp['E'] = 7, mp['I'] = 8, mp['O'] = 9, mp['U'] = 10;
	int n = s.size();
	if (n <= 1)return s;
	int i = 0,j = n - 1;
	while (i < j)
	{
		while (i < n && !mp.count(s[i]))i++;
		if (i == n)return s;
		while (j >= 0 && !mp.count(s[j]) && i < j)j--;
		if (i < j)
		{
			swap(s[i++], s[j--]);
		}
	}
	return s;
}