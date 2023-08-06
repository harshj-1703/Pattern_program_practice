#include<stdio.h>

int main()
{
	int i,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",(i+1)*(j+1));
		}
		printf("\n");
	}
	return 0;
}