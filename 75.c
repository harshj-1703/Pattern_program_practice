#include<stdio.h>

int main()
{
	int i,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",i-j+1);
		}
		printf("\n");
	}
	return 0;
}