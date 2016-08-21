#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


bool isvalid(string ss)
{
	int value;
	if (ss.length() > 1 && ss[0] == '0')return false;
	sscanf(ss.c_str(), "%d",&value);
	return value >= 0 && value <= 255;
}
void helper(vector<string>& res, string& s, vector<string>& path, int index)
{
	if (path.size() == 4 && index == s.size())
	{
		string tmp = "";
		for (int i = 0; i < path.size(); ++i)
		{
			tmp += path[i] + '.';
		}
		tmp.pop_back();
		res.push_back(tmp);
		return;
	}
	else if (path.size() > 4)return;
	else
	{
		for (int i = index; i < s.size(); ++i)
		{
			if (isvalid(s.substr(index, i - index + 1)))
			{
				path.push_back(s.substr(index, i - index + 1));
				helper(res, s, path, i + 1);
				path.pop_back();
			}
		}
	}
}
vector<string> restoreIpAddresses(string s) {
	vector<string>res;
	vector<string>path;
	if (s.length() > 12 || s.length() < 4)return res;
	helper(res, s, path, 0);
	return res;
}

vector<string> restoreIpAddresses_neater(string s) {
	vector<string> ret;
	string ans;

	for (int a = 1; a <= 3; a++)
		for (int b = 1; b <= 3; b++)
			for (int c = 1; c <= 3; c++)
				for (int d = 1; d <= 3; d++)
					if (a + b + c + d == s.length()) {
						int A = stoi(s.substr(0, a));
						int B = stoi(s.substr(a, b));
						int C = stoi(s.substr(a + b, c));
						int D = stoi(s.substr(a + b + c, d));
						if (A <= 255 && B <= 255 && C <= 255 && D <= 255)
							if ((ans = to_string(A) + "." + to_string(B) + "." + to_string(C) + "." + to_string(D)).length() == s.length() + 3)
								ret.push_back(ans);
					}

	return ret;
}