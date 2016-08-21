#include"Header.h"
int calculate(string s)
{
	int n = s.size(),res=0,sign=1;
	if (n == 0)return 0;
	stack<int>stk;
	for (int i = 0; i < n; ++i)
	{
		char c = s.at(i);
		if (isdigit(c))
		{
			int cur = c - '0';
			while (i + 1 < n && isdigit(s.at(i + 1)))
			{
				cur = 10 * cur + s.at(++i) - '0';
			}
			res += sign*cur;
		}
		else if (c == '+')sign = 1;
		else if (c == '-')sign = -1;
		else if (c == '(')
		{
			stk.push(res);
			res = 0;
			stk.push(sign);
			sign = 1;
		}
		else if (c == ')')
		{
			res = res*stk.top();
			stk.pop();
			res += stk.top();
			stk.pop();
			sign = 1;
		}
	}
	return res;
}