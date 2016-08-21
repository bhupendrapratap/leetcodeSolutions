#include<stack>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
bool isValid(string s) {
	stack<char>stk;
	int i = 0, length = s.size();
	while (i< length)
	{
		switch (s[i])
		{
		case '(': case'[':case '{':stk.push(s[i]); break;
		case ')': if (stk.empty() || stk.top() != '(')return false; else stk.pop(); break;
		case '}': if (stk.empty() || stk.top() != '{')return false; else stk.pop(); break;
		case ']': if (stk.empty() || stk.top() != '[')return false; else stk.pop(); break;
		default:
			break;
		}
		i++;
	}
	return stk.empty();
	
}

bool isValid_neater(string s)
{
	
	char* stk = new char[s.size()];
	int head = 0;
	for (char c : s)
	{
		switch (c)
		{
		case '(': case'[':case '{':stk[head++]=c; break;
		case ')': if (head==0 || stk[--head] != '(')return false;break;
		case '}': if (head==0 || stk[--head] != '{')return false; break;
		case ']': if (head==0 || stk[--head] != '[')return false; break;
		default:
			break;
		}
	}
	delete[]stk;
	return head == 0;
}