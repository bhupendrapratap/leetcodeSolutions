#include"Header.h"
class FenwickTree{
	vector<int>sum_array;
	vector<int>num;
	int n;
	inline int lowbit(int x){ return x & -x; }
public:
	FenwickTree(int n) :n(n), sum_array(n + 1, 0),num(n,0){}
	FenwickTree(vector<int>& nums)
	{

		n = nums.size();
		num = nums;
		vector<int>v(n + 1, 0);
		sum_array = v;
		for (int i = 0; i < n; ++i)
		{
			add(i + 1, nums[i]);
		}
	}
	void add(int x, int val)
	{
		while (x <= n)
		{
			sum_array[x] += val;
			x += lowbit(x);
		}
	}

	int sum(int x)
	{
		int res = 0;
		while (x > 0)
		{
			res += sum_array[x];
			x -= lowbit(x);
		}
		return res;
	}

	void update(int i, int val) {
		add(i + 1, val - num[i]);
		num[i] = val;
	}

	int sumRange(int i, int j) {
		return num.size() == 0 ? 0 : sum(j + 1) - sum(i);
	}
};

class NumArray {
	vector<int>sum_array;
	vector<int>num;
	int n;
	inline int lowbit(int x){ return x & -x; }

public:
	NumArray(vector<int> &nums) {
		n = nums.size();
		num = nums;
		vector<int>v(n + 1, 0);
		sum_array = v;
		for (int i = 0; i < n; ++i)
		{
			add(i + 1, nums[i]);
		}
	}

	void add(int x, int val)
	{
		while (x <= n)
		{
			sum_array[x] += val;
			x += lowbit(x);
		}
	}

	int sum(int x)
	{
		int res = 0;
		while (x > 0)
		{
			res += sum_array[x];
			x -= lowbit(x);
		}
		return res;
	}
	void update(int i, int val) {
		add(i + 1, val - num[i]);
		num[i] = val;
	}

	int sumRange(int i, int j) {
		return num.size() == 0 ? 0 : sum(j + 1) - sum(i);
	}
};


class FenwickTree1{
	vector<int>num;
	int length;
	inline int lowbit(int x){ return x & -x; }
public:
	FenwickTree1(int n) :length(n), num(n + 1, 0){}
	void add(int x, int val)
	{
		while (x <= length)
		{
			num[x] += val;
			x += lowbit(x);
		}
	}
	int sum(int x)
	{
		int res = 0;
		while (x>0)
		{
			res += num[x];
			x -= lowbit(x);
		}
		return res;
	}

};