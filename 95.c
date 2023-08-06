#include<stdio.h>

int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
	return 0;
}