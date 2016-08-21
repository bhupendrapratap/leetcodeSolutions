#include"Header.h"
const int target = 10;
int guess(int num)
{
	if (num == target)return 0;
	if (num > target)return 1;
	else return -1;
}

int guessNumber(int n) {
	int low = 1, hi = n, mid = 0;
	while (low<hi)
	{
		mid = low + (hi - low) / 2;
		if (guess(mid) == 0)return mid;
		else if (guess(mid) == 1)hi = mid;
		else low = mid + 1;
	}
	return low;
}
