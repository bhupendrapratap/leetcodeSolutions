#include"Header.h"
bool isBadVersion(int n)
{
	return true;
}
int firstBadVersion(int n)
{
	int i = 1, j = n;
	while (i <= j)
	{
		int mid = i + (j - i) / 2;
		if (isBadVersion(mid))
		{
			j = mid - 1;
		}
		else
		{
			i = mid + 1;
		}
	}
	return i;
}

int firstBadVersion1(int n)
{
	int i = 1,j = n;
	while (i < j)
	{
		int mid = i + (j - i) / 2;
		if (isBadVersion(mid))
		{
			j = mid;
		}
		else
		{
			i = mid + 1;
		}
	}
	return i;
}