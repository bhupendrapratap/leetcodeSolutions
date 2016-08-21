#include"Header.h"
/*
@taobupt
2016-7
*/
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	int remaining = 0,total=0,start=0,n=cost.size();//from the start point to current point; is there a solution; the start point;
	for (int i = 0; i < n; ++i)
	{
		remaining += gas[i] - cost[i];
		total += gas[i] - cost[i];
		if (remaining < 0)
		{
			remaining = 0;
			start = i+1;
		}
	}
	return total >= 0 ? start : -1;
}