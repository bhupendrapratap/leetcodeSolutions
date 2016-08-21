#include"Header.h"
class Stack{
public:
	queue<int>q1;
	queue<int>q2;
	void push(int x)
	{
		q1.push(x);
	}

	void pop()
	{
		if (q1.empty())
		{
			while (q2.size() != 1)
			{
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
		else
		{
			while (q1.size() != 1)
			{
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
	}

	int top()
	{
		if (q1.empty())
		{
			while (q2.size() != 1)
			{
				q1.push(q2.front());
				q2.pop();
			}
			int x = q2.front();
			q1.push(x);
			q2.pop();
			return x;
		}
		else
		{
			while (q1.size() != 1)
			{
				q2.push(q1.front());
				q1.pop();
			}
			int x = q1.front();
			q2.push(x);
			q1.pop();
			return x;
		}
	}
	bool empty()
	{
		return q1.empty() && q2.empty();
	}
};