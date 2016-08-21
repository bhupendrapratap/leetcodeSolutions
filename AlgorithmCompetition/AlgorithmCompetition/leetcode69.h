typedef long long ll;

int helper_sqrt(ll lo, ll hi, int x)
{
	if (lo == hi - 1)return hi;
	ll mid = lo + (hi - lo) / 2;
	if (mid*mid <= x && (mid + 1)*(mid + 1) > x)return mid;
	return mid*mid > x ? helper_sqrt(lo, mid, x) : helper_sqrt(mid, hi, x);

}

int helper(ll lo,ll hi,int x)
{
	if (lo == hi)return hi;
	int mid = lo + (hi - lo) / 2;
	if (mid*mid <= x && (mid+1)*(mid+1)>x)return mid;
	return mid*mid > x ? helper(lo, mid-1, x) : helper(mid + 1, hi, x);
}

int mySqrt(int x) {
	return helper(0, x, x);
}