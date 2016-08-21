/*
@taobupt
2016-7-9
*/


//BFS
#include"Header.h"
int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
	if (beginWord == endWord)return 1;
	unordered_map<string, bool>vis;
	queue<string>q;
	q.push(beginWord);
	vis[beginWord] = true;
	int dis = 2,n=beginWord.size();
	string cur = "";
	while (!q.empty())
	{
		int size = q.size();
		while (size--)
		{
			cur = q.front();
			q.pop();
			for (int i = 0; i < n; ++i)
			{
				char letter = cur[i];
				for (char c = 'a'; c <= 'z'; ++c)
				{
					/*string x = cur.substr(0, i);
					x.push_back(c);
					x += cur.substr(i + 1);*/
					cur[i] = c;
					if (cur == endWord)return dis;
					if (wordList.find(cur) != wordList.end() && !vis[cur])
					{
						q.push(cur);
						vis[cur] = true;
					}
				}
				cur[i] = letter;
			}
		}
		dis++;
	}
	return 0;
}
