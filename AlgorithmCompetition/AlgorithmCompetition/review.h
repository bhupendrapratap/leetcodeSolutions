//#include"Header.h"
#include<cstdlib>
#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
#include"struct.h"

int maximalSquare(vector<vector<char>>& matrix)
{
	if (matrix.size() == 0 || matrix[0].size() == 0)return 0;
	int m = matrix.size(), n = matrix[0].size(), ma = 0;
	vector<vector<int>>dp(m, vector<int>(n, 0));
	for (int i = 0; i < m; ++i)
	{
		if (matrix[i][0] == '1')
		{
			ma = 1;
			dp[i][0] = 1;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (matrix[0][i] == '1')
		{
			ma = 1;
			dp[0][i] = 1;
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (matrix[i][j] == '1')
			{
				dp[i][j] = matrix[i][j] == '1' ? min(min(dp[i][ j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1 : 0;
				ma = max(ma, dp[i][j]);
			}
		}
	}
	return ma; 
}









int calculate(string s)
{
	int ans = 0, n = s.size(), i = 0, sign = 1, a = 0;
	if (n == 0)return 0;
	stack<int>stk;
	while (i < n)
	{
		ans = 0;
		while(isdigit(s[i]))
		{
			ans = 10 * ans + (s[i] - '0');
			i++;
			if (!isdigit(s[i]))stk.push(sign*ans);
		}
		if (s[i] == '+')sign = 1;
		else if (s[i] == '-')sign = -1;
		else if (s[i] == '*')
		{
			while (!isdigit(s[i]))i++;
			ans = 0;
			while (isdigit(s[i]))
			{
				ans = 10 * ans + (s[i] - '0');
				i++;
			}
			i--;
			a = stk.top()*ans;
			stk.pop();
			stk.push(a);
		}

		else if (s[i] == '/')
		{
			while (!isdigit(s[i]))i++;
			ans = 0;
			while (isdigit(s[i]))
			{
				ans = 10 * ans + (s[i] - '0');
				i++;
			}
			i--;
			a = stk.top()/ans;
			stk.pop();
			stk.push(a);
		}
		i++;
	}
	ans = 0;
	while (!stk.empty())
	{
		ans += stk.top();
		stk.pop();
	}
	return ans;
}

int calculateII(string s)
{
	int res = 0, n = s.size(),sign=1,cur=0;
	stack<int>stk;
	if (n == 0)return 0;
	for (int i = 0; i < n; ++i)
	{
		char c = s[i];
		if (isdigit(c))
		{
			cur = c - '0';
			while (i + 1 < n && isdigit(s.at(i + 1)))
			{
				cur = 10 * cur + (s[++i] - '0');
			}
			res += cur*sign;
		}
		else if (c == '+')sign = 1;
		else if (c == '-')sign = -1;
		else if (c == '(')
		{
			stk.push(res);
			res = 0;
			stk.push(sign);
			sign = 1;
		}
		else if (c == ')')
		{
			res *= stk.top();
			stk.pop();
			res+=stk.top();
			stk.pop();
			sign = 1;
		}

	}
	return res;
}


int getRight(TreeNode* root)
{
	int count = 0;
	while (root->right)
	{
		count++;
		root = root->right;
	}
	return count;
}

int getLeft(TreeNode* root)
{
	int count = 0;
	while (root->left)
	{
		count++;
		root = root->left;
	}
	return count;
}

int countNodes(TreeNode* root) {

	if (root == NULL)return 0;
	int l = getLeft(root);
	int r = getRight(root);
	if (l == r)return (2 << l) - 1;
	else return countNodes(root->left) + countNodes(root->right) + 1;
}

int getHeight(TreeNode* root)
{
	if (root == NULL)return 0;
	int l = getHeight(root->left);
	int r = getHeight(root->right);
	if (l < 0 || r < 0 || abs(l - r)>1)return -1;
	else return max(l,r) + 1;
}

bool isBalanced(TreeNode* root)
{
	if (root == NULL)return true;
	int l = getHeight(root->left);
	int r = getHeight(root->right);
	if (l < 0 || r < 0 || abs(l - r)>1)return false;
	else return true;
}


TreeNode* lowestCommonAncestor_recrusive(TreeNode* root, TreeNode* p, TreeNode* q)
{
	if (root == NULL || root == p || root == q)return root;
	TreeNode* left = lowestCommonAncestor_recrusive(root->left, p, q);
	TreeNode* right = lowestCommonAncestor_recrusive(root->right, p, q);
	if (p&&q)return root;
	else return left ? left : right;
}


vector<TreeNode*>stkTovector(stack<TreeNode*>stk)
{
	vector<TreeNode*>res;
	while (!stk.empty())
	{
		res.push_back(stk.top());
		stk.pop();
	}
	reverse(res.begin(), res.end());
	return res;
}


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
	if (root == NULL || root == q || root == p)return root;
	stack<TreeNode*>stk;
	vector<TreeNode*>vp;
	vector<TreeNode*>vq;
	unordered_map<TreeNode*, bool>mp;
	TreeNode* node;
	stk.push(root);
	mp[root] = true;
	while (!stk.empty())
	{
		node = stk.top();
		if (node->left && !mp[node->left])
		{
			stk.push(node->left);
			mp[node->left] = true;
			if (node->left == p)
			{
				vp = stkTovector(stk);
				if (!vq.empty())break;
			}

			if (node->left == q)
			{
				vq = stkTovector(stk);
				if (!vp.empty())break;
			}
			continue;
		}

		if (node->right && !mp[node->right])
		{
			stk.push(node->right);
			mp[node->right] = true;
			if (node->right == p)
			{
				vp = stkTovector(stk);
				if (!vq.empty())break;
			}

			if (node->right == q)
			{
				vq = stkTovector(stk);
				if (!vp.empty())break;
			}
		}
		stk.pop();
	}
	int i = 0;

	for ( i = 0; i < int(vp.size()) && i<int(vq.size()); ++i)
	{
		if (vp[i] != vq[i])break;
	}
	return vp[i - 1];
}

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t)
{
	int n = nums.size();
	if (n < 2)return false;
	vector<pair<long, int>>v;
	for (int i = 0; i < n; ++i)
	{
		v.push_back(make_pair(long(nums[i]), i));
	}
	sort(v.begin(), v.end(), [](pair<long, int>a, pair<long, int>b){return a.first > b.first; });
	for (int i = 0; i < n; ++i)
	{
	
		int j = i + 1;
		while (j < n)
		{
			if (v[j].first - v[i].first > t)break;
			else if (v[j].second - v[j].second <= k && v[j].second - v[i].second >= -k)return true;
			else j++;
		}
	}
	return false;
}


int rob(vector<int>& nums)
{
	int n = nums.size();
	if (n == 0)return 0;
	if (n == 1)return nums[0];
	if (n == 2)return max(nums[0], nums[1]);
	vector<int>dp1(n - 1, nums[0]);
	vector<int>dp2(n - 1, nums[1]);
	dp1[1] = max(nums[0], nums[1]);
	dp2[1] = max(nums[1], nums[2]);
	for (int i = 2; i < n-1; ++i)
	{
		dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i]);
		dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i+1]);
	}
	return max(dp1[n - 2], dp2[n - 2]);
}




//class WordDictory
//{
//public:
//	struct Node{
//		bool end;
//		Node* nodes[26];
//		Node()
//		{
//			end = false;
//			memset(nodes, 0, 26 * sizeof(Node*));
//		}
//	};
//	WordDictory()
//	{
//		root = new Node();
//	}
//
//	void addWord(string word)
//	{
//		Node* cur = root;
//		for (auto c : word)
//		{
//			if (!cur->nodes[c - 'a'])
//			{
//				cur->nodes[c - 'a'] = new Node();
//			}
//			cur = cur->nodes[c - 'a'];
//		}
//		cur->end = true;
//	}
//
//	bool search(string word)
//	{
//		return find(word, 0, root);
//	}
//
//	bool find(string& word, int pos, Node* from)
//	{
//		if (pos == word.size())return from->end;
//		if (word[pos] == '.')
//			for (auto n : from->nodes)
//				if (n&&find(word, pos + 1, n))return true;
//				else;
//		else return from->nodes[word[pos] - 'a'] ? find(word, pos + 1, from->nodes[word[pos] - 'a']) : false;
//		return false;
//	}
//
//private:
//	Node* root;
//};


//class Trie{
//public:
//	struct TrieNode
//	{
//		bool isend;
//		char content;
//		vector<TrieNode*>children;
//		TrieNode* subNode(char c)
//		{
//			if (!children.empty())
//			{
//				for (auto child : children)
//				{
//					if (child->content == c)return child;
//				}
//			}
//			return nullptr;
//		}
//		TrieNode() :isend(false), content(' '){}
//		TrieNode(char c) :isend(false), content(c){}
//		~TrieNode()
//		{
//			for (auto child : children)delete child;
//		}
//	};
//	Trie(){ root = new TrieNode(); }
//	void addword(string word)
//	{
//		if (search(word))return;
//		TrieNode* cur = root;
//		for (char c : word)
//		{
//			TrieNode* child = cur->subNode(c);
//			if (!child)
//			{
//				TrieNode* newNode = new TrieNode(c);
//				cur->children.push_back(newNode);
//				cur = newNode;
//			}else cur =child;
//		}
//		cur->isend = true;
//	}
//
//	
//
//	bool search(string word)
//	{
//		TrieNode* cur = root;
//		for (char c : word)
//		{
//			/*TrieNode* child = cur->subNode(c);
//			if (!child)return false;
//			else cur = child;*/
//			cur = cur->subNode(c);
//			if (!cur)return false;
//		}
//		return cur->isend;
//	}
//
//	bool startwiths(string prefix)
//	{
//		TrieNode* cur = root;
//		for (char c : prefix)
//		{
//			/*TrieNode* child = cur->subNode(c);
//			if (!child)return false;
//			else cur = child;*/
//			cur = cur->subNode(c);
//			if (!cur)return false;
//		}
//		return true;
//	}
//
//private:
//	TrieNode* root;
//};

bool canFinish(int courses, vector<pair<int, int>>& prerequisites)
{
	int n = prerequisites.size();
	vector<vector<int>>g(courses);
	vector<int>in_degree(courses, 0);
	for (int i = 0; i < n; ++i)
	{
		g[prerequisites[i].second].push_back(prerequisites[i].first);
		in_degree[prerequisites[i].first]++;
	}
	queue<int>q;
	for (int i = 0; i < courses; ++i)
	{
		if (in_degree[i] == 0)q.push(i);
	}
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (auto it = g[cur].begin(); it != g[cur].end(); ++it)
		{
			if (--in_degree[*it] == 0)q.push(*it);
		}
	}
	for (int i = 0; i < courses; ++i)if (in_degree[i] != 0)return false;
	return true;
}



/*
2016-7-7
*/

class Tire
{
public:
	struct TireNode{
		bool isend;
		char content;
		vector<TireNode*>children;
		TireNode():isend(false),content(' '){}
		TireNode(char c):isend(false), content(c){}
		TireNode* subNode(char c)
		{
			if (!children.empty())
			{
				for (auto child : children)
				{
					if (child->content == c)return child;
				}
			}
			return nullptr;
		}
		~TireNode()
		{
			for (auto child : children)delete child;
		}
	};

	Tire(){ root = new TireNode(); }
	void addWord(string word)
	{
		TireNode* cur = root;
		if (search(word))return;
		for (char c : word)
		{
			TireNode* child = cur->subNode(c);
			if (child == nullptr)
			{
				TireNode* newNode = new TireNode(c);
				cur->children.push_back(newNode);
				cur = newNode;
			}
			else cur = child;
		}
		cur->isend = true;
	}

	bool search(string word)
	{
		TireNode* cur = root;
		for (char c : word)
		{
			cur = cur->subNode(c);
			if (cur == nullptr)return false;
		}
		return cur->isend;
	}

	bool startswith(string prefix)
	{
		TireNode* cur = root;
		for (char c : prefix)
		{
			cur = cur->subNode(c);
			if (cur == nullptr)return false;
		}
		return true;
	}

private:
	TireNode* root;

};

class WordDictionary
{
public:
	struct Node{
		bool isend;
		Node* nodes[26];
		Node(){
			memset(nodes, 0, 26 * sizeof(Node*));
		}
	};

	WordDictionary(){ root = new Node(); }

	void addWord(string word)
	{
		Node* cur = root;
		for (char c : word)
		{ 
			if (!cur->nodes[c - 'a'])cur->nodes[c - 'a'] = new Node();
			cur = cur->nodes[c - 'a'];
		}
		cur->isend = true;
	}

	bool search(string word)
	{
		return find(word, 0, root);
	}

	bool find(string& word, int pos, Node* from)
	{
		if (pos == word.size())return from->isend;
		if (word[pos] == '.')
		{
			for (auto n : from->nodes)
			{ 
				if (n&&find(word, pos + 1, n))return true;
			}
		}
		else return from->nodes[word[pos]-'a'] ? find(word,pos+1,from->nodes[word[pos]-'a']) : false;
		return false;
	}

private:
	Node* root;
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	int extra=0;
	ListNode* first=new ListNode(0);
	ListNode* p=first;
	while(l1||l2||extra)
	{
		int sum1=(l1?l1->val:0)+(l2?l2->val:0)+extra;
		extra=sum1>=10?1:0;
		p->next=new ListNode(sum1%10);
		p=p->next;
		l1=l1?l1->next:NULL;
		l2=l2?l2->next:NULL;
	}
	return first->next;
}

int lengthOfLongestSubstring(string s)
{
	int max_len=0,start=-1;
	unordered_map<char,int>mp;
	for(int i=0;i<s.size();++i)
	{
		if(mp.find(s[i])!=mp.end())start=max(start,mp[s[i]]);
		mp[s[i]]=i;
		max_len=max(max_len,i-start);
	}
	return max_len;
}


int maxArea(vector<int>& height)
{
	int i=0,j=height.size()-1,area=0;
	if(i>=j)return 0;
	while(i<j)
	{
		area=max(area,min(height[i],height[j])*(j-i));
		if(height[i]<=height[j])i++;
		else j--;
	}
	return area;
}

int romanToInt(string s)
{
	unordered_map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
	int res=mp[s.back()];
	for(int i=s.size()-2;i>=0;--i)
	{
		res+=mp[s[i]]<mp[s[i+1]]?-mp[s[i]]:mp[s[i]];
	}
	return res;
}

string intToRoman(int num)
{
	vector<vector<string>>roman{ { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }, { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
	{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" }, { "", "M", "MM", "MMM" } };
	string res="";
	int x=4;
	while(--x>=0)
	{
		res+=roman[x][num/int(pow(10,x))%10];
	}
	return res;
}

string longgestCommonPrefix(vector<string>& strs)
{
	int n=strs.size();
	if(n==0)return "";
	string prefix="";
	for(int i=0;i<=strs[0].size();++i)
	{
		prefix=strs[0].substr(0,i);
		for(int j=1;j<=n;++j)
		{
			if(prefix!=strs[j].substr(0,i))
			{
				prefix.pop_back();
				return prefix;
			}
		}
		
	}
	return prefix;
}

ListNode* removeNthFromEnd(ListNode* head,int n)
{
	ListNode* first=new ListNode(0);
	first->next=head;
	ListNode* fast=head;
	ListNode* slow=first;
	for(int i=1;i<=n;++i)
	{
		fast=fast->next;
	}
	while(fast)
	{
		fast=fast->next;
		slow=slow->next;
	}
	slow->next=slow->next->next;
	return first->next;
}

bool isValid(string s)
{
	stack<char>stk;
	for(char c:s)
	{
		switch(c)
		{
			case '(':case '[':case '{':
			stk.push(c);
			break;
			case ')':
			if(stk.empty()||stk.top()!='(')return false;else stk.pop();break;
			case '}':
			if(stk.empty()||stk.top()!='{')return false;else stk.pop();break;
			case ']':
			if(stk.empty()||stk.top()!='[')return false;else stk.pop();break;
			default:
			break;
		}
	}
	return stk.empty();
}

bool dfs79(vector<vector<char>>& board,string& word,int x,int y,int index,int dx[],int dy[],vector<vector<bool>>& vis)
{
	if(index==word.size())return true;
	else{
		for(int k=0;k<4;++k)
		{
			int nx=x+dx[k],ny=y+dy[k];
			if(nx<0||nx>=board.size()||ny<0||ny>=board[0].size())continue;
			if(!vis[nx][ny] && word[index]==board[nx][ny])
			{
				vis[nx][ny]=true;
				if(dfs79(board,word,nx,ny,index+1,dx,dy,vis))return true;
				vis[nx][ny]=false;
			}
		}
	}
	return false;
}

bool exist(vector<vector<char>>& board,string word)
{
	if(board.size()==0||board[0].size()==0)return false;
	int m=board.size(),n=board[0].size();
	vector<vector<bool>>vis(m,vector<bool>(n,false));
	int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(board[i][j]==word[0])
			{
				vis[i][j]=true;
				if(dfs79(board,word,i,j,1,dx,dy,vis))return true;
				vis[i][j]=false;
			}
		}
	}
	return false;
}

void dfs200(int x,int y,vector<vector<int>>& grid,vector<vector<int>>& vis,int dx[],int dy[])
{
	for(int k=0;k<4;++k)
	{
		int nx=x+dx[k],ny=y+dy[k];
		if(nx<0||nx>=grid.size()||ny<0||ny>=grid[0].size()||grid[nx][ny]=='0'||vis[nx][ny])continue;
		vis[nx][ny]=true;
		dfs200(nx,ny,grid,vis,dx,dy);
	}
}

int numIslands(vector<vector<int>>& grid)
{
	int ans=0;
	if(grid.size()==0||grid[0].size()==0)return 0;
	int m=grid.size(),n=grid[0].size();
	vector<vector<bool>>vis(m,vector<bool>(n,false));
	int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(grid[i][j]=='1' && !vis[i][j])
			{
				vis[i][j]=true;
				dfs200(i,j,grid,vis,dx,dy);
				ans++;
			}
		}
	}
	return ans;
}

void solve(vector<vector<char>>& board)
{
	if(board.size()==0||board[0].size()==0)return;
	int m=board.size(),n=board[0].size();
	vector<vector<bool>>vis(m,vector<bool>(n,false));
	int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(board[i][j]=='O' && !vis[i][j])
			{
				queue<pair<int,int>>q;
				queue<pair<int,int>>q1;
				bool flag=true;
				q.push(make_pair(i,j));
				q1.push(make_pair(i,j));
				while(!q.empty())
				{
					int curx=q.front().first,cury=q.front().second;
					q.pop();
					for(int k=0;k<4;++k)
					{
						int nx=curx+dx[k],ny=cury+dy[k];
						if(nx<0||nx>=board.size()||ny<0||ny>=board[0].size())
						{
							flag=false;
							continue;
						}
						if(vis[nx][ny] ||board[nx][ny]=='X')continue;
						vis[nx][ny]=true;
						q.push(make_pair(nx,ny));
						q1.push(make_pair(nx,ny));
					}
				}
				if(flag)
				{
					while(!q.empty())
					{
						int xx=q1.front().first,yy=q1.front().second;
						board[xx][yy]='X';
						q1.pop();
					}
				}
			}
		}
	}
	return;
}

class TrieNode{
	public:
	bool isend;
	char content;
	vector<TrieNode*>children;
	TrieNode():content(' '),isend(false){}
	TrieNode(char c):content(c),isend(false){}
	TrieNode* subNode(char c)
	{
		if(!children.empty())
		{
			for(auto child:children)
			{
				if(child->content==c)return child;
			}
		}
		return nullptr;
	}
	~TrieNode()
	{
		for(auto child:children)
		{
			delete child;
		}
	}

};

class Trie{
	public:
	Trie(){
		root=new TrieNode();
		}
	void insert(string word)
	{
		if(search(word))return;
		TrieNode* cur=root;
		for(char c:word)
		{
			TrieNode* child=cur->subNode(c);
			if(child!=nullptr)cur=child;
			else
			{
				TrieNode* newNode=new TrieNode(c);
				cur->children.push_back(newNode);
				cur=newNode;
			}
		}
		cur->isend=true;
	}

	bool serach(string word)
	{
		TrieNode* curr=root;
		for(char c:word)
		{
			curr=curr->subNode(c);
			if(curr==nullptr)return false;
		}
		return curr->isend;
	}

	bool startswith(string word)
	{
		TrieNode* curr=root;
		for(char c:word)
		{
			curr=curr->subNode(c);
			if(curr==nullptr)return false;
		}
		return true;
	}

	private:
	TrieNode* root;
};

class WordDictory{
	public:
	struct TrieNode{
		bool isend;
		TrieNode* nodes[26];
		TrieNode(){
			isend=false;
			memset(nodes,0,26*sizeof(TrieNode*));
		}
	};
	WordDictory()
	{
		root=new TrieNode();
		root->isend=true;
	}

	void addword(string word)
	{
		TrieNode* cur=root;
		for(char c:word)
		{
			if(!cur->nodes[c-'a'])
			{
				cur->nodes[c-'a']=new TrieNode();
			}
			cur=cur->nodes[c-'a'];
		}
		cur->isend=true;
	}

	bool search(string word)
	{
		return find(word,0,root);
	}
	bool find(string& word,int pos,TrieNode* from)
	{
		if(pos==word.size())return from->isend;
		if(word[pos]=='.')
		{
			for(auto&n: from->nodes)
			{
				if(n&& find(word,pos+1,n))return true;
			}
		}
		else
		{
			return from->nodes[word[pos]-'a']?find(word,pos+1,from->nodes[word[pos]-'a']):false;
		}
		return false;
	}

	private:
	TrieNode* root;
};

vector<int> diffwaysTocompute(string input)
{
	vector<int>res;
	for(int i=0;i<input.size();++i)
	{
		char c=input[i];
		if(c=='+'||c=='-'||c=='*')
		{
			vector<int>left=diffwaysTocompute(input.substr(0,i));
			vector<int>right=diffwaysTocompute(input.substr(i+1));
			for(int m=0;m<left.size();++m)
			{
				for(int n=0;n<right.size();++n)
				{
					switch(c)
					{
						case '+':
						res.push_back(left[m]+right[n]);
						break;
						case '-':
						res.push_back(left[m]-right[n]);
						break;
						case '*':
						res.push_back(left[m]*right[n]);
						break;
					}
				}
			}
		}
	}
	if(res.empty())res.push_back(stoi(input));
	return res;
}

vector<TreeNode*>makeTrees(int begin,int end)
{
	vector<TreeNode*>ret;
	if(begin>end)ret.push_back(NULL);
	else if(begin==end)ret.push_back(new TreeNode(begin));
	else
	{
		for(int i=begin;i<=end;++i)
		{
			vector<TreeNode*>left=makeTrees(begin,i-1);
			vector<TreeNode*>right=makeTrees(i+1,end);
			for(int l=0;l<left.size();++l)
			{
				for(int r=0;r<right.size();++r)
				{
					TreeNode* root=new TreeNode(i);
					root->left=left[l];
					root->right=right[r];
					ret.push_back(root);
				}
			}
		}
	}
	return ret;

}

vector<TreeNode*>generateTreed(int n)
{
	vector<TreeNode*>res;
	if(n<1)return res;
	res=makeTrees(1,n);
	return res;
}

bool dfs306(string& num,long long pre,long long cur,int x,int y)
{
if (y == num.size())return true;
	if (y > num.size())return false;
	for (int i = y + 1; i <= num.size(); ++i)
	{
		string t = num.substr(y, i - y);
		long long now = stoll(t);
		if (to_string(now).size() != t.size())continue;
		if (pre + cur < now)return false;
		if (pre + cur == now)return dfs306(num, cur, now, y, i);
	}
	return false;
}

bool isAdditiveNumber(string num)
{
	int n=num.size();
	if(n<3)return false;
	for(int i=1;i<=n/3;++i)
	{
		string s=num.substr(0,i);
		long long pre=stoll(s);
		if(to_string(pre).size()!=s.size())continue;
		for(int j=i+1;j<=2*n/3;++j)
		{
			string ss=num.substr(i,j-i);
			long long cur=stoll(ss);
			if(to_string(cur).size()!=ss.size())continue;
			if(dfs306(num,pre,cur,i,j))return true;
		}
	}
	return false;
}

TreeNode* deserialize(vector<string>& data)
{
	if(data.empty()||data[0]=="#")return NULL;
	queue<TreeNode*>q;
	TreeNode* root=new TreeNode(stoi(data[0]));
	TreeNode* cur=root;
	for(int i=1;i<data.size();++i)
	{
		if(data[i]=="#")
		{
			if(i%2==0 && !q.empty())
			{
				cur=q.front();
				q.pop();
			}
			continue;
		}
	TreeNode* newNode=new TreeNode(stoi(data[i]));
	q.push(newNode);
	if(i%2==1)cur->left=newNode;
	else
	{
		cur->right=newNode;
		cur=q.front();
		q.pop();
	}
	return root;
	}
	
}























