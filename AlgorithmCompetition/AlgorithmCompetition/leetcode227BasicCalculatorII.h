#include"Header.h"
int calculateII(string s) {
	stack<int>stk;
	int ans = 0, sign = 1, i = 0, n = s.size(),a=0;
	while (i < n)
	{
		ans = 0;
		while (isdigit(s[i]))
		{
			ans = 10 * ans + (s[i] - '0');
			i++;
			if (!isdigit(s[i]))stk.push(sign*ans);
		}
		if (s[i] == '+')sign = 1;
		else if (s[i] == '-')sign = -1;
		else if (s[i] == '*')
		{
			while (!isdigit(s[i]))i++;
			ans = 0;
			while (isdigit(s[i]))
			{
				ans = 10 * ans + (s[i] - '0');
				i++;
			}
			i--;
			a = stk.top()*ans;
			stk.pop();
			stk.push(a);
		}else if (s[i] == '/')
		{
			while (!isdigit(s[i]))i++;
			ans = 0;
			while (isdigit(s[i]))// the last of string is space
			{
				ans = 10 * ans + (s[i] - '0');
				i++;
			}
			i--;
			a = stk.top()/ans;
			stk.pop();
			stk.push(a);
		}
		i++;
	}
	ans = 0;
	while (!stk.empty())
	{
		ans += stk.top();
		stk.pop();
	}
	return ans;
}