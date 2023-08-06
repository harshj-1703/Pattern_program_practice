#include<stdio.h>

int main()
{
	int i=0,j=0,c=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
			if(c%2==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			c++;
		}
		printf("\n");
	}
	return 0;
}