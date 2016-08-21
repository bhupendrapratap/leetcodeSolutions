#include<vector>
#include<algorithm>
int maxArea(std::vector<int>& height) {
	int area = 0;
	int i = 0, j = height.size() - 1;
	while (i<j)
	{
		if (height[i] <= height[j])
		{
			area = std::max(area, height[i] * (j - i));
			i++;
		}
		else
		{
			area = std::max(area, height[j] * (j - i));
			j--;
		}
	}
	return area;
}

int maxArea_neater(std::vector<int>& height) {
	int area = 0;
	int i = 0, j = height.size() - 1;
	while (i<j)
	{
		int l = height[i], r = height[j];
		if (height[i] <= height[j])
		{
			area = std::max(area, height[i] * (j - i));
			while(height[++i]<l);
		}
		else
		{
			area = std::max(area, height[j] * (j - i));
			while(height[--j]<r);
		}
	}
	return area;
}