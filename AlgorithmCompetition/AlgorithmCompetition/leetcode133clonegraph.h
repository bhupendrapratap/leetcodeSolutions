#include"Header.h"
struct UndirectedGraphNode {
	int label;
	vector<UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x) {};
	
};

class leetcode133
{
	unordered_map<UndirectedGraphNode*, UndirectedGraphNode*>hash;
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
		if (!node)return nullptr;
		if (hash.find(node) == hash.end())
		{
			hash[node] = new UndirectedGraphNode(node->label);
			for (auto n : node->neighbors)
			{
				hash[node]->neighbors.push_back(cloneGraph(n));
			}
		}
		return hash[node];
	}
};
