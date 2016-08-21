#include"Header.h"
string removeDuplicateLetters(string s) {
	int cnt[26] = { 0 };
	bool vis[26] = { false };
	vector<char>ans;
	for (char c : s)
	{
		cnt[c - 'a']++;
	}
	for (char c : s)
	{
		cnt[c - 'a']--;
		if (vis[c - 'a'])continue;
		while (!ans.empty() && ans.back() > c && cnt[ans.back() - 'a'])
		{
			vis[ans.back() - 'a'] = false;
			ans.pop_back();
		}
		ans.push_back(c);
		vis[c - 'a'] = true;
	}
	string res = "";
	for (char c : ans)res += c;
	return res;
}

//review

//string removeDulicateLetters(string s)
//{
//	int cnt[26] = { 0 };
//	bool vis[26] = { false };
//	vector<char>ans;
//	for (char c : s)
//	{
//		cnt[c - 'a']++;
//	}
//	for (char c : s)
//	{
//		cnt[c - 'a']--;
//		if (vis[c - 'a'])continue;
//		while (!ans.empty() && ans.back() > c && cnt[ans.back() - 'a'])
//		{
//			vis[ans.back() - 'a'] = false;
//			ans.pop_back();
//		}
//		ans.push_back(c);
//		vis[c - 'a'] = true;
//	}
//	string res = "";
//	for (char c : ans)res += c;
//	return res;
}