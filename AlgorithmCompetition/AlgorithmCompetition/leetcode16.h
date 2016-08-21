#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;


// forget while loop , then I got a wrong answer
int threeSumClosest(vector<int>& nums, int target) {
	int closeest = nums[0] + nums[1] + nums[2],length=nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < length-2; ++i)
	{
		int begin = i + 1, end = length - 1;
		while (begin < end)
		{
			int sum = nums[i] + nums[begin] + nums[end];
			if (sum == target)return target;
			else if (sum < target)
			{
				closeest = abs(closeest - target) > abs(sum - target) ? sum : closeest;
				begin++;
			}
			else
			{
				closeest = abs(closeest - target) > abs(sum - target) ? sum : closeest;
				end--;
			}
		}
	}
	return closeest;
}