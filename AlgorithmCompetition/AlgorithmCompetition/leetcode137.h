#include<vector>
using namespace std;


int singleNumber_neater(vector<int>& A) {
	int bit[32] = { 0 };
	int ans = 0, n = A.size();
	for (int i = 0; i<32; i++){
		for (int j = 0; j<n; j++){
			bit[i] += (A[j] >> i) & 1;
		}
		ans += ((bit[i] % 3!=0)?1:0) << i;
	}
	return ans;
}


/*
review 2016-06-12

int singlenumber_neater(vector<int>& A)
{
	int bit[32]={0};
	int ans=0;n=A.size();
	for(int i=0;i<32;++i)
	{
		for(int j=0;j<n;++j)
		{
			bit[i]+=(A[j]>>i)&1;
		}
		ans+=((bit[i]%3!=0£©£¿1£º0)<<i;
	}
	return ans;
}
*/






int singleNumberII(vector<int>& s)
{
	vector<int> t(32);////Made a array contain 32 elements.
	int sz = s.size();
	int i, j, n;
	for (i = 0; i < sz; ++i)
	{
		n = s[i];
		for (j = 31; j >= 0; --j)
		{
			t[j] += n & 1;//Find the last digit.
			n >>= 1;
			if (!n)
				break;
		}
	}
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % 3;//"3" represents k times. 
		if (n)
			res += 1 << (31 - j);
	}
	return res;
}






int singleNumberII(vector<int>& s,int k)
{
	vector<int> t(32);////Made a array contain 32 elements.
	int sz = s.size();
	int i, j, n;
	for (i = 0; i < sz; ++i)
	{
		n = s[i];
		for (j = 31; j >= 0; --j)
		{
			t[j] += n & 1;//Find the last digit.
			n >>= 1;
			if (!n)
				break;
		}
	}
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % k;//"3" represents k times. 
		if (n)
			res += 1 << (31 - j);
	}
	return res;
}





int singlenumberII(vector<int>& s)
{
	vector<int>t(32);
	int length = s.size();
	int i, j, n;
	for (i = 0; i < length; ++i)
	{
		n = s[i];
		for (j = 31; j >= 0; --j)
		{
			t[j] += n & 1;
			n >>= 1;
			if (!n)break;
		}
	}
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % 3;
		if (n)res += 1 << (31 - j);
	}
	return res;
}


int SingleNumbeII(vector<int>& s)
{
	vector<int>t(32);
	int length = s.size();
	int i, j, n;
	for (i = 0; i < length; ++i)
	{
		n = s[i];
		for (j = 31; j >= 0; --j)
		{
			t[j] += n & 1;
			n >>= 1;
			if (!n)break;
		}
	}
	int res = 0;
	for (j = 31; j >= 0; --j)
	{
		n = t[j] % 3;
		if (n)res += 1 << (31 - j);
	}
	return res;
}