#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;


//attention repeate please
vector<vector<int>> fourSum(vector<int>& nums,int target) {
	vector<vector<int>>res;
	int length = nums.size();
	if (nums.size() < 4)return res;
	sort(nums.begin(), nums.end());
	for (int j = 0; j < length - 3; ++j)
	{
		if (j>0 && nums[j] == nums[j - 1])continue;
		if (nums[j] + nums[j + 1] + nums[j + 2] + nums[j + 3]>target) break; ////acclerate the edge case
		if (nums[j] + nums[length - 3] + nums[length - 2] + nums[length - 1]<target) continue;
		for (int i = j+1; i < length - 2; ++i)
		{
			if (i>j+1 && nums[i] == nums[i - 1])continue;
			if (nums[j] + nums[i] + nums[i + 1] + nums[i + 2]>target) break;//acclerate the edge case
			if (nums[i] + nums[j] + nums[length - 2] + nums[length - 1]<target) continue;
			int begin = i + 1, end = length - 1;
			while (begin < end)
			{
				if (begin > i + 1 && nums[begin] == nums[begin - 1])
				{
					begin++;
					continue;
				}

				if (end < length - 1 && nums[end] == nums[end + 1])
				{
					end--;
					continue;
				}

				int sum = nums[begin] + nums[end] + nums[i]+nums[j]-target;
				if (sum == 0)
				{
					res.push_back({ nums[begin++], nums[end], nums[i],nums[j]});//attention here we must add begin++ here
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
	}
	return res;
}