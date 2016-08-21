#include<vector>
using namespace std;
#include<string>
#include<unordered_map>
vector<string> findRepeatedDnaSequences(string s) {
	unordered_map<string, int>mp;
	//hash<string>h;
	vector<string>res;
	for (int i = 0; i<int(s.size()) - 9; ++i)
	{
		if (mp[s.substr(i, 10)]++ == 1)res.push_back(s.substr(i, 10));
	}
	return res;
}

//review 2016-6-12

vector<string> findrepeatedDna(string s)
{
	unordered_map<size_t, int>mp;
	hash<string>h;
	vector<string>res;
	for (int i = 0; i<int(s.size() - 9); ++i)
	{
		if (mp[h(s.substr(i, 10))]++ == 1)res.push_back(s.substr(i, 10));
	}
	return res;
}