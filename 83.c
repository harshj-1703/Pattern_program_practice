#include<stdio.h>

int main()
{
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",5-i+j);
		}
		printf("\n");
	}
	return 0;
}