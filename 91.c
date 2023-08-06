#include<stdio.h>

int main()
{
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("%c ",i+97+(5-j));
		}
		printf("\n");
	}
	return 0;
}