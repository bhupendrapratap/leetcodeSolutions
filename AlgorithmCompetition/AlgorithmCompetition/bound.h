#include"Header.h"

int my_lower_bound(vector<int>&res, int target)
{
	int low = 0, hi = res.size() - 1, mid = 0,pos=0;
	if (res[hi] < target)return hi + 1;
	while (low < hi)
	{
		mid = low + (hi - low) / 2;
		if (res[mid] < target)
		{
			low = mid + 1;
			pos = low;
		}
		else
		{
			hi = mid;
			pos = hi;
		}
	}
	return pos;
}

int my_upper_bound(vector<int>&res, int target)
{
	int low = 0, hi = res.size() - 1, mid = 0, pos = 0;
	if (res[hi] <= target)return hi + 1;
	while (low < hi)
	{
		mid = low + (hi - low) / 2;
		if (res[mid] > target)
		{
			hi = mid;
			pos = hi;
		}
		else
		{
			low = mid + 1;
			pos = low;
		}
	}
	return pos;
}