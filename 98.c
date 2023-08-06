#include<stdio.h>

int factorial(int n)
{
	int f;
	for(n=1;n>1;n--)
	{
		f *= n;
	}
	return f;
}

int ncr(int i,int j)
{
	return factorial(i) / (factorial(i-j) * factorial(j));
}

int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" %d",ncr(i,j));
		}
		printf("\n");
	}
	return 0;
}