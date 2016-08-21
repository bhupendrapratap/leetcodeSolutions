#include"Header.h"
string countAndSay(int n) {
	string res = "1",ss="";
	for (int i = 2; i <= n; ++i)
	{
		int total = 1;
		ss.clear();
		for (int j = 1; j < res.size(); ++j)
		{
			if (res[j] == res[j - 1])total++;
			else
			{
				ss.push_back(char('0' + total));
				ss.push_back(res[j - 1]);
				total = 1;
			}
		}
		ss.push_back(char('0' + total));
		ss.push_back(res[res.size() - 1]);
		res = ss;
	}
	return res;
}