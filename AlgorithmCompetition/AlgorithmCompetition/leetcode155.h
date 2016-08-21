#include"Header.h"
class MinStack{
public:
	stack<int>s1;
	stack<int>min_stack;
	void push(int x)
	{
		s1.push(x);
		if (min_stack.empty() || min_stack.top() > x)min_stack.push(x);
		else min_stack.push(min_stack.top());
	}
	void pop()
	{
		s1.pop();
		min_stack.pop();
	}
	int top()
	{
		return s1.top();
	}
	int getMin()
	{
		return min_stack.top();
	}
};