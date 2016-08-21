#include"Header.h"
bool isPerfectSquare(int num) {
	if (num<=0)return false;
	if (num == 1)return true;
	int begin = 1, end = num,mid=0;
	while (begin <= end)
	{
		mid = begin + (end - begin) / 2;
		if (mid >= 46341 || mid*mid > num)end=mid - 1;
		else if (mid*mid==num)return true;
		else begin = mid + 1;
	}
	return false;
}