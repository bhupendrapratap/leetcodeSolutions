#include<math.h>
#include<algorithm>
using namespace std;
const int MAXN =1000000;
int prime[MAXN+1];
template<typename T>
struct Point{
	T x, y;
	Point(T x = 0.0, T y = 0.0) :x(x), y(y){}
};

template<typename T>
Point<T> operator +(Point<T>& a, Point<T>& b)
{
	return Point<T>(a.x + b.x, a.y + b.y);
}

template<typename T>
ostream& operator << (ostream& out,  Point<T>& a)
{
	out << "a.x " << a.x << "   a.y  " << a.y << endl;
	return out;
}

double dist(double x1, double y1, double x2, double y2)
{
	return hypot(x1-x2,y1-y2);//sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

template<typename T>
double dist(Point<T> a, Point<T> b)
{
	return hypot(a.x - b.x, a.y - b.y);
}

long long factorial(int n)
{
	long long m = 1;
	for (int i = 1; i <= n; ++i)m *= i;
	return m;
}

long long C(int n, int m)////it is easy to overflow C(21,1) is an overflow example
{
	return factorial(n) / (factorial(m)*factorial(n - m));
}

long long C_Refined(int n, int m)
{
	m = std::max(m, n - m);// C(7,4)=C(7,3)
	long long ans = 1;
	for (int i = m + 1; i <= n; ++i)ans *= i;
	for (int i = 1; i <= n - m; ++i)ans /= i;
	return ans;
}


bool is_prime(int n)///if n is large ,then it will be overflow
{
	if (n <= 1)return false;
	int m = static_cast<int>(floor(sqrt(n) + 0.5));// from calculate again;
	for (int i = 2; i<=m; ++i)if(n%i == 0)return false;
	return true;
}

void swap_cite(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void swap_pointer(int* a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


template<typename T>
T sum(T* begin, T* end)
{
	//T* p = begin;
	T ans = 0;
	for (T* p = begin; p != end; ++p)ans=ans+*p;
	return ans;
}

double pow_quick(double a, int n)
{
	double ans = 1.0;
	while (n)
	{
		if (n % 2)ans *= a;
		n>>=1;
		a *= a;
	}
	return ans;
}



void GetPrime()
{
	memset(prime, 0, sizeof(prime));
	for (int i = 2; i <= MAXN; ++i)
	{
		if (!prime[i])prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] <= MAXN / i; ++j)
		{
			prime[prime[j] * i] = 1;
			if (i%prime[j] == 0)break;
		}
	}
}