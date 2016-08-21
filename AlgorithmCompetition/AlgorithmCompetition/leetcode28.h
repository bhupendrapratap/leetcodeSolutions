#include<string>
using namespace std;
int strStr(string haystack, string needle) {
	int n = haystack.size(), m = needle.size();
	if (n == 0 || m > n)return -1;
	for (int i = 0; i < n-m+1; ++i)
	{
		int j = 0;
		for (j = 0; j < m; ++j)
		{
			if (haystack[i + j] != needle[j])break;
		}
		if(j==m)return i;
	}
	return -1;
}