#include"Header.h"
//class TrieNode{
//public:
	//char content;
	//bool isend;
	//vector<TrieNode*>children;
	//TrieNode() :content(' '), isend(false){}
	//TrieNode(char c) :content(c), isend(false){}
	//TrieNode* subNode(char ch)
	//{
	//	if (!children.empty())
	//	{
	//		for (auto child : children)
	//		{
	//			if (child->content == ch)return child;
	//		}
	//	}
	//	return nullptr;
	//}
	//~TrieNode()
	//{
	//	for (auto child : children)
	//	{
	//		delete child;
	//	}
	//}
//
//};
//
//class Trie{
//public:
//	Trie(){ root = new TrieNode(); }
//	void insert(string s) {
//		if (search(s)) return;
//		TrieNode* curr = root;
//		for (auto ch : s) {
//			TrieNode* child = curr->subNode(ch);
//			if (child != nullptr) {
//				curr = child;
//			}
//			else {
//				TrieNode* newNode = new TrieNode(ch);
//				curr->children.push_back(newNode);
//				curr = newNode;
//			}
//		}
//		curr->isend = true;
//	}
//
//	bool search(string key)
//	{
//		TrieNode* curr = root;
//		for (auto ch : key)
//		{
//			curr = curr->subNode(ch);
//			if (curr == nullptr)return false;
//		}
//		return curr->isend == true;//forget, I am a sb
//	}
//
//	bool startsWith(string prefix)
//	{
//		TrieNode* curr = root;
//		for (auto ch : prefix)
//		{
//			curr = curr->subNode(ch);
//			if (curr == nullptr)return false;
//		}
//		return true;
//	}
//	~Trie() {
//		delete root;
//	}
//private:
//	TrieNode* root;
//};



class TrieNode {
public:
	// Initialize your data structure here.

	bool isend;
	char content;
	vector<TrieNode*>children;
	TrieNode() :content(' '), isend(false){}
	TrieNode(char c) :content(c), isend(false){}
	TrieNode* subNode(char ch)
	{
		if (!children.empty())
		{
			for (auto child : children)
			{
				if (child->content == ch)return child;
			}
		}
		return nullptr;
	}
	~TrieNode()
	{
		for (auto child : children)
		{
			delete child;
		}
	}
};

class Trie {
public:
	Trie() {
		root = new TrieNode();
	}

	// Inserts a word into the trie.
	void insert(string word) {
		if (search(word))return;
		TrieNode* curr = root;
		for (auto c : word)
		{
			TrieNode* child = curr->subNode(c);
			if (child != nullptr)curr = child;
			else
			{
				TrieNode* newNode = new TrieNode(c);
				curr->children.push_back(newNode);
				curr = newNode;
			}
		}
		curr->isend = true;

	}

	// Returns if the word is in the trie.
	bool search(string word) {
		TrieNode* curr = root;
		for (char c : word)
		{
			curr = curr->subNode(c);
			if (curr == nullptr)return false;
		}
		return curr->isend == true;
	}

	// Returns if there is any word in the trie
	// that starts with the given prefix.
	bool startsWith(string word) {
		TrieNode* curr = root;
		for (char c : word)
		{
			curr = curr->subNode(c);
			if (curr == nullptr)return false;
		}
		return true;
	}

private:
	TrieNode* root;
};