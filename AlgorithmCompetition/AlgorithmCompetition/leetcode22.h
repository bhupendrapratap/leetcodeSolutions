#include<vector>
#include<stack>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

void allseqpop(stack<int>& input, stack<int>& stk, vector<int>& seq, vector<vector<int>>& output, int n)
{
	if (input.empty() && stk.empty() && seq.size() == n)
	{
		output.push_back(seq);
	}
	if (!input.empty())
	{
		int top = input.top();
		input.pop();
		stk.push(top);
		allseqpop(input, stk, seq, output, n);
		stk.pop();
		input.push(top);
	}
	if (!stk.empty())
	{
		int top = stk.top();
		stk.pop();
		seq.push_back(top);
		allseqpop(input, stk, seq, output, n);
		seq.pop_back();
		stk.push(top);
	}
}


vector<vector<int>>getallpop(int n)
{
	vector<vector<int>>output;
	vector<int>seq;
	stack<int>input;
	stack<int>stk;
	for (int i = n; i >= 1; --i)
	{
		input.push(i);
	}
	allseqpop(input, stk, seq, output, n);
	return output;
}




//void popseq1(vector<vector<int>>& output, vector<int>& seq, stack<int>& input, stack<int>& stk, int n)
//{
//	if (stk.empty() && input.empty() && seq.size() == n)
//	{
//		output.push_back(seq);
//		return;
//	}
//	if (!input.empty())
//	{
//		int x = input.top();
//		input.pop();
//		stk.push(x);
//		popseq1(output, seq, input, stk, n);
//		stk.pop();
//		input.push(x);
//
//	}
//	if (!stk.empty())
//	{
//		int top = stk.top();
//		stk.pop();
//		seq.push_back(top);
//		popseq1(output, seq, input, stk, n);
//		seq.pop_back();
//		stk.push(top);
//	}
//}
//
//vector<vector<int>>getallpop1(int n)
//{
//	vector<vector<int>>output;
//	stack<int>input;
//	stack<int>stk;
//	vector<int>seq;
//	for (int i = n; i >= 1;--i)
//	{
//		input.push(i);
//	}
//	popseq1(output, seq, input, stk, n);
//	return output;
//}

bool isvalidpop(vector<int>seq, vector<int>res)//based on this, you can jujge the options
{
	stack<int>stk;
	int j = 0;
	for (int i = 0; i < int(seq.size()); ++i)
	{
		stk.push(seq[i]);
		if (stk.top() != res[j])continue;
		while (!stk.empty())
		{
			if (stk.top() == res[j])
			{
				stk.pop();
				j++;
			}
			else
				break;
		}
	}
	return stk.empty();
}


void helper(vector<string>& res, string& parent, int left, int right)
{
	if (left == 0 && right == 0)
	{
		res.push_back(parent);
		return;
	}
	 if (left > 0)
	{
		parent.push_back('(');
		helper(res, parent, left - 1, right);
		parent.pop_back();
	}
	if (right > 0 && left < right)
	{
		parent.push_back(')');
		helper(res, parent, left, right - 1);
		parent.pop_back();
	}

}

vector<string>Parenthesis(int n)
{
	vector<string>res;
	if (n == 0)return res;
	string x = "";
	helper(res, x, n, n);
	return res;
}

