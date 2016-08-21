#include"Header.h"

string largestNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end(), [](int a, int b){return stoll(to_string(a) + to_string(b)) > stoll(to_string(b) + to_string(a)); });
	string res;
	for (int it : nums)
	{
		res+=to_string(it);
	}
	int i = 0,n=res.size();
	for (i = 0; i <n; ++i)
	{
		if (res[i] != '0')break;
	}
	return i != n? res.substr(i) : "0";
	//return res;
}