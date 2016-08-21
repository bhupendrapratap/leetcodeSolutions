using namespace std;
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<stdint.h>
int hammingWeight(uint32_t n)//unsigned int
{
	int res = 0;
	while (n)
	{
		res++;
		n &= n - 1;
	}
	return res;
}

//review 2016-6-12

int hamingWeight1(uint32_t n)
{
	int res = 0;
	while (n)
	{
		res++;
		n &= n - 1;
	}
	return res;
}