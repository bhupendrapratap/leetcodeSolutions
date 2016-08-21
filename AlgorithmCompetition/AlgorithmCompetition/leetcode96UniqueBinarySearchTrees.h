#include"Header.h"
int numTrees(int n) {
	long long res = 1;
	for (int i = n+1; i <=n*2; ++i)
	{
		res = res*i / (i - n);
	}
	return res/(n+1);
}

int numTrees_iterative(int n)
{
	vector<int>G(n + 1, 1);
	for (int i = 2; i <= n;++i)
	{
		for (int j = 0; j < i; ++j)
		{
			G[i] += G[j] * G[i - j + 1];
		}
	}
	return G[n];
}

int numTree_recrusive(int n)
{
	if (n == 0 || n == 1)return 1;
	int result = 0;
	for (int i = 0; i < n; ++i)result += numTree_recrusive(i)*numTree_recrusive(n - i - 1);
	return result;
}