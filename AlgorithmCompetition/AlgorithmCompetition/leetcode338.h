#include<vector>
using namespace std;
vector<int> countBits(int num) {
	vector<int>res(num + 1, 0);
	for (int i = 1; i <= num; ++i)
		res[i] = res[i&(i-1)] + 1;
	return res;
}


//res[i]=res[i/2]+i%2;

//review 2016-6-12

vector<int>countBitss(int num)
{
	vector<int>res(num + 1, 1);
	for (int i = 1; i <= num; ++i)
	{
		res[i] = res[i&(i - 1)] + 1;
	}
	return res;
}