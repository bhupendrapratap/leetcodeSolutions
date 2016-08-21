#include"Header.h"
int hIndexII(vector<int>& citations) {
	int left = 0, length = citations.size(), right = length - 1, mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (citations[mid] >= length - mid)right = mid - 1;
		else left = mid + 1;
	}
	return length - left;
}