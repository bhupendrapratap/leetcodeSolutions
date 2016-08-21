#include"Header.h"
class NestedInteger{
public:
	bool isInteger()const;
	int getInteger()const;
	vector<NestedInteger> getList();
};

class NestedIterator{
	vector<int>flat;
	int size;
	void flatten(NestedInteger& nest)
	{
		if (nest.isInteger())flat.push_back(nest.getInteger());
		else
		{
			int k = 0;
			vector<NestedInteger> li = nest.getList();
			while (k < li.size())
			{
				flatten(li[k]);
				k++;
			}
		}
	}

	NestedIterator(vector<NestedInteger> & nestedList)
	{
		size = 0;
		for (int i = 0; i < nestedList.size(); ++i)flatten(nestedList[i]);
	}

	int next(){
		return flat[size++];
	}

	bool hasNext()
	{
		return size < flat.size();
	}

};