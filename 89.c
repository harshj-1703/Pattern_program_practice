#include<stdio.h>

int main()
{
	int i=0,j=0,c=5;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("%d ",c);
		}
		c--;
		printf("\n");
	}
	return 0;
}