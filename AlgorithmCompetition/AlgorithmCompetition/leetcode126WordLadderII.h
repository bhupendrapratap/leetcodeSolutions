
/*
@taobupt
Email: wangtaoo665@gmail.com
leetcode126
*/

#include"Header.h"
//vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
//	unordered_map<string, bool>vis;
//	vector<vector<string>>res;
//	vector<string>ans;
//	ans.push_back(beginWord);
//	queue<string>q;
//	q.push(beginWord);
//	vis[beginWord] = true;
//	int n = beginWord.size();
//	string cur = "";
//	char letter = 'a';
//	while (!q.empty())
//	{
//		cur = q.front();
//		q.pop();
//		for (int i = 0; i < n; ++i)
//		{
//			letter = cur[i];
//			for (char c = 'a'; c <= 'z'; ++c)
//			{
//				cur[i] = c;
//				if (cur == endWord)
//				{
//					cur
//				}
//			}
//		}
//	}
//
//}

vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList) {
	vector<vector<string>>res;
	wordList.insert(beginWord);
	wordList.insert(endWord);
	unordered_map<string, vector<string>>edge;
	int n = beginWord.size(),size=0;
	for (auto cur : wordList)
	{
		for (int j = 0; j < n; ++j)
		{
			string xx = cur;
			for (char c = cur[j]+1; c <= 'z'; ++c)
			{
				xx[j] = c;
				if (wordList.find(xx) != wordList.end())
				{
					edge[cur].push_back(xx);
					edge[xx].push_back(cur);
				}

			}
		}
	}
	queue<vector<string>>q;
	q.push({ beginWord });
	unordered_map<string, bool>vis;
	vis[beginWord] = true;
	bool flag = false;
	vector<string>allow_word;
	vector<string>curPath;
	string cur;
	while (!flag &&!q.empty())
	{
		allow_word.clear();
		size = q.size();
		while (size--)
		{
			curPath = q.front();
			q.pop();
			cur = curPath.back();
			for (auto i : edge[cur])
			{
				if (i == endWord)
				{
					curPath.push_back(endWord);
					res.push_back(curPath);
					flag = true;
					curPath.pop_back();
				}
				if (vis.find(i) == vis.end())
				{
					curPath.push_back(i);
					q.push(curPath);
					allow_word.push_back(i);
					curPath.pop_back();
				}
			}
		}
		for (auto ele : allow_word)vis[ele] = true;
	}
	return res;
	
}