#include<string>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
	int carry = 1, sum = 0, length = digits.size() - 1;
	vector<int>res;
	for (int i = length; i >= 0; --i)
	{
		sum = digits[i] + carry;
		carry = sum >= 10 ? 1 : 0;
		res.push_back(sum % 10);
	}
	if (carry)res.push_back(1);
	reverse(res.begin(), res.end());
	return res;
}

vector<int> plusOne(vector<int>& digits) {
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i)
	{
		if (digits[i] == 9)
		{
			digits[i] = 0;
		}
		else
		{
			digits[i]++;
			return digits;
		}
	}
	digits[0] = 1;
	digits.push_back(0);
	return digits;
}


//vector<int>plusone(vector<int>& digits)
//{
//	int n = digits.size();
//	for (int i = n - 1; i >= 0; --i)
//	{
//		if (digits[i] == 9)digits[i] = 0;
//		else{
//			digits[i]++;
//			return digits;
//		}
//	}
//	digits[0] = 1;
//	digits.push_back(0);
//	return digits;
//}