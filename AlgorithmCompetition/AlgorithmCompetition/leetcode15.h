#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;


//attention repeate please
vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>>res;
	int length = nums.size();
	if (nums.size() < 3)return res;
	sort(nums.begin(), nums.end());
	for (int i = 0; i < length - 2; ++i)
	{
		if (i>0 && nums[i] == nums[i - 1])continue;
		int begin = i+1, end = length - 1;
		while (begin < end)
		{
			if (begin > i + 1 && nums[begin] == nums[begin - 1])
			{
				begin++;
				continue;
			}

			if (end<length-1 && nums[end] == nums[end+1])
			{
				end--;
				continue;
			}

			int sum = nums[begin] + nums[end] + nums[i];
			if (sum== 0)
			{
				res.push_back({ nums[begin++], nums[end], nums[i] });//attention here we must add begin++ here
			}
			else if (sum < 0)
			{
				begin++;
			}
			else 
			{
				end--;
			}
		}
	}
	return res;
}