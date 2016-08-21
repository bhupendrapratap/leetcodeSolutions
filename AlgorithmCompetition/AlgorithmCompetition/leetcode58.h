#include"Header.h"
int lengthOfLastWord(string s) {
	string tmp = "";
	istringstream is(s);
	while (is >> tmp);
	return tmp.size();
}

int lengthOfLastWord1(string s) {
	int len = 0, tail = s.size() - 1;
	while (tail >= 0 && s[tail] == ' ')--tail;
	while (tail >= 0 && s[tail] != ' ')
	{
		tail--;
		len++;
	}
	return len;
}