#include<stdio.h>

int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<5;i+=2)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}