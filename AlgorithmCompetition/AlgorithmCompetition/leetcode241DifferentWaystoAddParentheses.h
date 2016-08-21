#include"Header.h"
vector<int> diffWaysToCompute(string input) {
	vector<int>res;
	for (int i = 0; i < input.size(); ++i)
	{
		char c = input[i];
		if (c == '+' || c == '-' || c == '*')
		{
			vector<int>left = diffWaysToCompute(input.substr(0, i));
			vector<int>right = diffWaysToCompute(input.substr(i + 1));
			for (int m = 0; m < left.size(); ++m)
			{
				for (int n = 0; n < right.size(); ++n)
				{
					switch (c)
					{
					case '+':
						res.push_back(left[m] + right[n]);
						break;
					case '-':
						res.push_back(left[m] - right[n]);
						break;
					case'*':
						res.push_back(left[m] * right[n]);
						break;
					default:
						break;
					}
				}
			}
		}
	}
	if (res.empty())res.push_back(stoi(input));
	return res;
}
