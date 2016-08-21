#include<cstdlib>
#include<algorithm>
using namespace std;
#include<functional>
#include<queue>
#include<vector>

enum comp{Small,Big};

void topk(vector<int>& nums,int k,comp type)//small
{

	if (type == Small)
	{
		priority_queue< int, vector<int>, less<int>>q;
		for (int i = 0; i < k; ++i)
		{
			q.push(nums[i]);
		}
		for (int i = k; i < nums.size(); ++i)
		{
			if (nums[i] < q.top())
			{
				//cout << q.top();
				q.pop();
				q.push(nums[i]);
			}
		}
	}
	else
	{
		priority_queue< int, vector<int>, greater<int>>q1;
		for (int i = 0; i < k; ++i)
		{
			q1.push(nums[i]);
		}
		for (int i = k; i < nums.size(); ++i)
		{
			if (nums[i] > q1.top())
			{
				//cout << q.top();
				q1.pop();
				q1.push(nums[i]);
			}
		}
	}
	
}
