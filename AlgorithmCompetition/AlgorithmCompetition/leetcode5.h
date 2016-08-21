#include"Header.h"
string longestPalindrome(string s) {
	if (s.size() <= 1)return s;
	int min_start, max_len = 1,n=s.size();
	for (int i = 0; i < n;)
	{
		if (n - i <= max_len / 2)break;
		int j = i, k = i;
		while (k < n - 1 && s[k + 1] == s[k])++k;
		i = k + 1;
		while (k < n - 1 && j>0 && s[k + 1] == s[j - 1]){ ++k; --j; }
		int newLen = k - j + 1;
		if (newLen > max_len){ min_start = j; max_len = newLen; }
	}
	return s.substr(min_start, max_len);
}

//neater

int lo, maxlen;

void extend(string s, int j, int k)
{
	while (j >= 0 && k <s.size() && s[j] == s[k]){ j--; k++; }
	if (maxlen < k - j + 1)
	{
		lo = j + 1;
		maxlen = k - j + 1;
	}
}

string longestPalindrome1(string s) {
	int min_start, max_len = 1, n = s.size();
	if (n < 2)return s;
	for (int i = 0; i < n - 1; ++i)
	{
		extend(s, i, i);//odd length
		extend(s, i, i + 1);
	}
	return s.substr(lo, lo + maxlen);
}