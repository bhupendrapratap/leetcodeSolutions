#include"Header.h"
int numDecodings(string s) {
	int r2 = 1, r1 = 1,n=s.size();//r2 is the s[i-2],r1[i-1]
	if (n == 0 || s[0] == '0')return 0;
	for (int i = 1; i < n; ++i)
	{
		if (s[i] == '0')r1 = 0;
		if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6')
		{
			r1 += r2;
			r2 = r1 - r2;
		}
		else r2 = r1;
	}
	return r1;
}