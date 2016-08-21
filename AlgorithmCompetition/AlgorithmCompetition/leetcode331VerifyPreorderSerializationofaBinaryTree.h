#include"Header.h"
bool isValidSerialization(string preorder) {
	int diff = 1;
	for (char c : preorder)
	{
		if (c == ',')continue;
		if (--diff < 0)return false;
		if (c != '#')diff += 2;
	}
	return diff == 0;
}