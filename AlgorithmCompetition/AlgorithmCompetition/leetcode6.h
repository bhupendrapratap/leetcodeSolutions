#include<cstdlib>
using namespace std;
#include<string>
#include<vector>

//has some rules, you can find that step is 2*numRows-2

string convert(string s, int numRows) {
	string res = "";
	if (numRows < 2)return s;
	int index = 0, step = 2 * numRows - 2,length=s.size();
	while (index*step < length){ res += s[index*step]; index++; }
	index = 0;
	for (int i = 1; i < numRows - 1; ++i)
	{
		index = 0;
		if ((i + index*step) < length && (i + index*step) >= 0)res += s[i + index*step];
		index = 1;
		while ((i + index*step) < length || (index*step - i) < length)
		{
			if ((index*step-i) < length && (-i+index*step) >= 0)res += s[index*step-i];
			if ((i + index*step) < length && (i + index*step) >= 0)res += s[i + index*step];
			index++;
		}
	}
	index = 0;
	while ((numRows - 1 + index*step) < length){
		res += s[numRows - 1 + index*step]; index++;
	}
	return res;
}


string convert_neater(string s, int numRows) {
	/*vector<string> vs(numRows, "");
	int n = s.length(), i = 0;
	while (i < n) {
		for (int j = 0; j < numRows && i < n; j++)
			vs[j].push_back(s[i++]);
		for (int j = numRows - 2; j >= 1 && i < n; j--)
			vs[j].push_back(s[i++]);
	}
	string zigzag;
	for (string v : vs) zigzag += v;
	return zigzag;*/

	vector<string>vs(numRows, "");
	int i = 0, length = s.size();
	while (i < length)
	{
		for (int j = 0; j < numRows && i < length; ++j)vs[j].push_back(s[i++]);
		for (int j = numRows - 2; j >= 1 && i < length; --j)vs[j].push_back(s[i++]);
	}
	string zigzag = "";
	for (string v : vs)zigzag += v;
	return zigzag;

}