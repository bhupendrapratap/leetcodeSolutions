int rangeBitwiseAnd(int m, int n) {
	//if (n >= 2 * m)return 0; //overflow 
	int count = 0;
	while (m != n)
	{
		m >>= 1;
		n >>= 1;
		count++;
	}
	return m << count;
}