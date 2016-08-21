#include"Header.h"
int evalRPN(vector<string>& tokens) {
	int n = tokens.size(),a=0,b=0;
	if (n == 0)return 0;
	if (n == 1)return stoi(tokens[0]);
	stack<int>stk;
	for (string x : tokens)
	{
		if (x == "+")
		{
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(a + b);
		}
		else if (x == "-")
		{
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(b-a);
		}
		else if (x == "*")
		{
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(a * b);
		}
		else if (x == "/")
		{
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(b/a);
		}
		else
		{
			stk.push(stoi(x));
		}
	}
	return stk.top();
}