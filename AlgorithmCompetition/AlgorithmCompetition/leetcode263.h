
bool isUgly(int num) {
	if (num<1)return false;
	for (int i = 2; i<6 && num; i++)
		while (num % i == 0)num /= i;
	return num == 1;
}

bool isUgly1(int num) {
	if (num<1)return false;
	while (num>1)
	{
		if (num % 2 == 0) num /= 2;
		else if (num % 3 == 0)num /= 3;
		else if (num % 5 == 0) num /= 5;
		else return false;
	}
	return true;
}

//review 2016-6-12

bool isugly_reivew(int num)
{
	if (num < 1)return false;
	for (int i = 2; i <= 5; ++i)
	{
		while (num%i == 0)num /= i;
	}
	return num == 1;
}