#include"Header.h"
pNode HUFFMAN(string x)
{
	priority_queue < pNode,vector<pNode>,cmp>pq;
	unordered_map<char, int>mp;
	int n = x.size();
	for (int i = 0; i < n; ++i)mp[x[i]]++;
	for (auto it = mp.begin(); it != mp.end();++it)
	{
		pNode p = new HTNode(it->second,it->first);
		pq.push(p);
	}

	/*for (int i = 0; i <mp.size(); ++i)
	{
		cout << pq.top().fre << endl;
		pq.pop();
	}*/

	for (int i = 0; i < int(mp.size()) - 1; ++i)
	{
		HUFFMANNode* x = pq.top();
		pq.pop();
		HUFFMANNode* y = pq.top();
		pq.pop();
		pNode z = new HUFFMANNode(x->fre + y->fre, 10);
		z->left = x;
		z->right = y;
		pq.push(z);
	}
	return pq.top();
}

void test_priority()
{
	priority_queue<int>pq;
	for (int i = 1; i <= 10; ++i)pq.push(i);
	for (int i = 1; i <= 10; ++i)
	{
		cout << pq.top() << endl;
		pq.pop();
	}
}