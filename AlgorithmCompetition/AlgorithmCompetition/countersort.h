#include"Header.h"
void countsort(int a[], int length,int maximum)
{
	vector<int>C(maximum+1,0);
	vector<int>B(length+1, 0);
	for (int i = 0; i < length; ++i)
	{
		C[a[i]]++;
	}
	for (int i = 1; i <= maximum;++i)
	{
		C[i] += C[i - 1];
	}
	for (int i = length-1; i >=0;--i)
	{
		B[C[a[i]]] = a[i];
		C[a[i]]--;
	}
	//delete[]B;
	//delete[]C;
}