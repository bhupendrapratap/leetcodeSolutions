#include"Header.h"
bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites)
{
	vector<vector<int>>g(numCourses);
	vector<int>in_degree(numCourses, 0);
	int n = prerequisites.size();
	for (int i = 0; i < n; ++i)
	{
		g[prerequisites[i].second].push_back(prerequisites[i].first);
		in_degree[prerequisites[i].first]++;
	}
	queue<int>q;
	int cnt = 0;
	for (int i = 0; i < numCourses; ++i)
	{
		if (in_degree[i] == 0)
		{
			cout << i << endl;
			q.push(i);
		}
	}
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (auto it = g[cur].begin(); it != g[cur].end(); ++it)
		{
			if (--in_degree[*it] == 0)q.push(*it);
		}
	}
	for (int i = 0; i < numCourses; ++i)if (in_degree[i] != 0)return false;
	return true;
}