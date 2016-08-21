#include<math.h>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<sstream>
using namespace std;
typedef long long LL;
map<LL, char>mp;
int base_total = 0;

void inital()
{
	while (base_total <= 26)
	{
		if (base_total < 10)mp[base_total] = 48 + base_total;
		else mp[base_total] = 55 + base_total;
		base_total++;
	}
}
const int coeff[3] = { 2, 3, 5 };



int getUgly_iteration(int n)//10 s
{
	vector<int>res(n, 1);
	int last = n;
	int a = 0, b = 0, c = 0;//the coeff of 2,3,5
	int i = 1;
	while (--n)
	{
		res[i] = min(min(2 * res[a], 3 * res[b]), 5 * res[c]);
		if (res[i] >= 2 * res[a])++a;
		if (res[i] >= 3 * res[b])++b;
		if (res[i] >= 5 * res[c])++c;
		++i;
	}
	return res[last- 1];
}




LL getUgly(int n)  //570 s  low efficiency
{
	priority_queue<LL, vector<LL>, greater<LL>>pq;
	set<LL>s;
	pq.push(1);
	s.insert(1);
	for (int i = 1;; ++i)
	{
		LL x = pq.top(); pq.pop();
		if (i == n){ 
			return x;
		}
		for (int j = 0; j <= 2; ++j)
		{
			LL x2 = x*coeff[j];
			if (!s.count(x2)){ s.insert(x2); pq.push(x2); }
		}
	}
}


string tobinary(LL n, LL base)
{
	string res;
	//string tmp;
	//stringstream ss;
	inital();
	while (n)
	{
		//ss.clear();
		//ss << (n%base);
		//ss >> tmp;
		//res=tmp+res;
		res.push_back(mp[n%base]);
		n /= base;
	}
	reverse(res.begin(), res.end());
	return res;
}

LL binaryto(string res, LL base)  //test successful  but three warnings
{
	LL ans = 0;
	/*LL length = static_cast<LL>(res.size());
	vector<LL>dp(length,1ll);
	for (LL i = 1; i < length; ++i)
	{
		dp[i] = base*dp[i - 1];
	}
	for (LL i = length - 1; i >= 0; --i)
	{
		ans += dp[length - i - 1] * (res[i] >= 65 ? res[i] - 55 : res[i] - 48);
	}*/
	return ans;
}



struct BigInteger
{
	static const int BASE = 100000000;
	static const int WIDTH = 8;
	vector<int>s;
	BigInteger(long long num = 0){ *this = num; }
	BigInteger operator =(long long num)
	{
		s.clear();
		do{
			s.push_back(num%BASE);
			num /= BASE;
		} while (num > 0);
		return *this;
	}

	BigInteger(string& str)
	{
		s.clear();
		int x, len = (str.length() - 1) / WIDTH + 1;
		for (int i = 0; i < len; ++i)
		{
			int end = str.length() - i*WIDTH;
			int start = max(0, end - WIDTH);
			sscanf_s(str.substr(start, end - start).c_str(), "%d", &x);
			s.push_back(x);
		}
	}


	BigInteger operator=(string& str)
	{
		s.clear();
		int x, len = (str.length() - 1) / WIDTH + 1;
		for (int i = 0; i < len; ++i)
		{
			int end = str.length() - i*WIDTH;
			int start = max(0, end - WIDTH);
			sscanf_s(str.substr(start, end - start).c_str(), "%d", &x);
			s.push_back(x);
		}
		return *this;
	}

	BigInteger operator+(BigInteger& b)
	{
		BigInteger c;
		c.s.clear();
		for (int i = 0, g = 0;; ++i)//g stands for carry set
		{
			if (g == 0 && i >= s.size() && i >= b.s.size())break;
			int x = g;
			if (i < s.size())x += s[i];
			if (i < b.s.size())x += b.s[i];
			c.s.push_back(x%BASE);
			g = x / BASE;
		}
		return c;
	}

	BigInteger operator*(BigInteger& b)
	{
		BigInteger c;
		c.s.clear();
		int min_length = min(b.s.size(), s.size());
		int max_length = max(b.s.size(), s.size());
		for (int i = 0, g = 0;i<min_length; ++i)//g stands for carry set
		{
			//if (g == 0 && i >= s.size() && i >= b.s.size())break;
			LL x = 1;
			for (int j = 0; j < max_length; ++j)
			{
				if (i < s.size())x *= s[i];
				if (i < b.s.size())x *= b.s[i];
			}
			x += g;
			c.s.push_back(x%BASE);
			g = x / BASE;
		}
		return c;
	}



	BigInteger operator-(BigInteger& b)// we can study a lot
	{
		BigInteger c;
		c.s.clear();
		int flag = 1;//biger or smaller
		if (*this < b)
		{
			flag = -1;
			swap(*this, b);
		}
		for (LL i = 0, g = 0;; ++i)//g stands for carry set
		{
			if (g == 0 && i >= s.size() && i >= b.s.size())break;
			LL x = g;
			if (i < s.size())x += s[i];
			if (i < b.s.size())x -= b.s[i];
			c.s.push_back((x+BASE)%BASE);
			g = x >= 0 ? 0 : -1;
		}
		if (flag == -1)c.s[s.size() - 1]= -c.s[s.size() - 1];
		return c;
	}

	bool operator<(BigInteger& b)
	{
		if (s.size() != b.s.size())return s.size() < b.s.size();
		for (int i = s.size() - 1; i >= 0; --i)
		{
			if (s[i] != b.s[i])return s[i] < b.s[i];
		}
		return false;//equal
	}
	
};


ostream& operator <<(ostream& out, const BigInteger& x)
{
	out << x.s.back();
	for (int i = x.s.size() - 2; i >= 0; --i)
	{
		char buf[20];
		sprintf_s(buf, "%08d", x.s[i]);
		for (int j = 0; j < strlen(buf); ++j)out << buf[j];
	}
	return out;
}
istream& operator >>(istream& in, BigInteger& x)
{
	string s;
	if (!(in >> s))return in;
	x = s;
	return in;
}

