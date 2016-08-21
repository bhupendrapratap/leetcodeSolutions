#include"Header.h"


int kthSmallest(vector<vector<int>>& matrix, int k) {
	priority_queue<int, vector<int>, less<int>>pq;
	int n = matrix.size(), x = k / n, y = k%n;
	while (k--)
	{
		pq.push(matrix[k / n][k%n]);
	}
	if (x == n)return pq.top();
	for (int j = y; j < n; ++j)
	{
		if (matrix[x][j] < pq.top())
		{
			pq.pop();
			pq.push(matrix[x][j]);
		}
	}
	for (int i = x+1; i<n; ++i)
	{
		for (int j = 0; j<n; ++j)
		{
			if (matrix[i][j] < pq.top())
			{
				pq.pop();
				pq.push(matrix[i][j]);
			}
		}
	}
	return pq.top();

}


struct Tuple{

	int x, y, val;
	Tuple(int x, int y, int val) :x(x), y(y), val(val){}
};

struct cmp{
	bool operator()(Tuple a, Tuple b)
	{
		return a.val > b.val;
	}
};


int kthSmallest1(vector<vector<int>>& matrix, int k)
{
	int n = matrix.size();
	priority_queue < Tuple, vector<Tuple>, cmp> pq;
	for (int j = 0; j <= n - 1; ++j)
	{
		Tuple a(0, j, matrix[0][j]);
		pq.push(a);
	}
	for (int i = 0; i < k - 1; ++i)
	{
		Tuple t = pq.top();
		pq.pop();
		if (t.x == n - 1)continue;
		Tuple newt = Tuple(t.x + 1, t.y, matrix[t.x + 1][t.y]);
		pq.push(newt);
	}
	return pq.top().val;

}


int kthSmallest2(vector<vector<int>>& matrix, int k)
{
	int n = matrix.size();
	int i, j;
	int le = matrix[0][0], ri = matrix[n - 1][n - 1];
	int mid = 0;
	while (le < ri)
	{
		mid = (le + ri) >> 1;
		int num = 0;
		for (i = 0; i < n; i++)
		{
			int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
			num += pos;
		}
		if (num < k)
		{
			le = mid + 1;
		}
		else
		{
			ri = mid;
		}
	}
	return le;
}


