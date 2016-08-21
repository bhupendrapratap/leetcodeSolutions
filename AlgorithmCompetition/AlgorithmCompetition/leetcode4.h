#include<vector>
#include<cstdlib>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	if (nums1.size() + nums2.size() == 0)return 0.0;
	vector<int>res(nums1.size() + nums2.size(), 0);
	int i = 0, j = 0, k = 0;
	for (;i < nums1.size() && j < nums2.size();)
	{
		if (nums1[i] < nums2[j])res[k++] = nums1[i++];
		else res[k++] = nums2[j++];
	}
	if (i == nums1.size())while (j<nums2.size())res[k++] = nums2[j++];
	else while (i<nums1.size())res[k++] = nums2[i++];
	if (res.size() % 2 != 0)return res[res.size() / 2];//////////we can short this using ?:
	else return (res[res.size() / 2] + res[res.size() / 2 - 1]) / 2.0;
}


double find_kth(vector<int>&A,vector<int>&B,int k)
{
	if(A.size()>B.size())return find_kth(B,A,k);
}

double findMedianSortedArrays(vector<int>A,vector<int>B)
{
	int total=(A.size()+B.size());
	if(total &0x1)return find_kth(A,B,total/2+1);
	else{
		double a=find_kth(A,B,total/2);
		double b=find_kth(A,B,total/2+1);
		return (a+b)/2;
	}
}