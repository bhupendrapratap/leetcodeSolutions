#include"Header.h"

void perm(vector < vector<int>>&res, vector<int> nums, int k)
{
	if (k == nums.size()-1)
	{
		res.push_back(nums);
		return;
	}
	//if (k > nums.size())return;
	
	
		for (int i = k; i <nums.size(); ++i)
		{
			if (i != k && nums[i] == nums[k])continue;
			swap(nums[i], nums[k]);
			perm(res, nums, k + 1);
		}
}



void recursion(vector<int> num, int i, vector<vector<int> > &res) {
	if (i == num.size() - 1) {
		res.push_back(num);
		return;
	}
	for (int k = i; k < num.size(); k++) {
		if (i != k && num[i] == num[k]) continue;
		swap(num[i], num[k]);
		recursion(num, i + 1, res);
	}
}


vector<vector<int>> permuteUnique(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	vector<vector<int> >res;
	perm(res,nums, 0);
	return res;

}


//lte
//void perm(vector < vector<int>>&res, vector<int> nums, int i)
//{
//	if (i == nums.size() - 1)
//	{
//		res.push_back(nums);
//	}
//	//if (k > nums.size())return;
//	else
//	{
//		for (int k = i; k <nums.size(); ++k)
//		{
//			//if (i != k && nums[i] == nums[k])continue;
//			swap(nums[i], nums[k]);
//			perm(res, nums, i + 1);
//			swap(nums[i], nums[k]);
//		}
//	}
//}
//
//vector<vector<int>> permuteUnique(vector<int>& nums)
//{
//	vector <vector<int>>res;
//	if (nums.size() == 0)return res;
//	sort(nums.begin(), nums.end());
//	perm(res, nums, 0);
//	sort(res.begin(), res.end());
//	vector<vector<int>>::iterator it = unique(res.begin(), res.end());
//	res.erase(it, res.end());
//	return res;
//
//}


vector<vector<int> > permuteUniqueII(vector<int> &num) {
	sort(num.begin(), num.end());
	vector<vector<int> >res;
	recursion(num, 0, res);
	return res;
}
