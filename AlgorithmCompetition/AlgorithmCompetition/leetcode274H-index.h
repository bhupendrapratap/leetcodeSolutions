#include"Header.h"

bool check(int n, vector<int>& v)
{
	int index = lower_bound(v.begin(), v.end(), n) - v.begin();
	if (index == 0)return true;
	if (index == v.size())return false;
	return (v.size() - index >= n) && v[index - 1] <= n;
}
int hIndex(vector<int>& citations) {
	int n = citations.size();
	if (n == 0)return 0;
	sort(citations.begin(), citations.end());
	int j = n;
	while (j)
	{
		if (check(j, citations))return j;
		j--;
	}
	return 0;
}

///neater 

int hIndex_neater(vector<int>& citations)
{
	int length = citations.size(),total=0;
	int* a = new int[length + 1];
	for (int c : citations)
	{
		a[min(c, length)]++;
	}
	for (int i = length; i >= 0; --i)
	{
		total += a[i];
		if (total >= i)return i;
	}
	return 0;
}