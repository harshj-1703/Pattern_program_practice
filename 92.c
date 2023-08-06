#include<stdio.h>

int main()
{
	int i=0,j=0,c=0;
	printf("1\n");
	for(i=0;i<5-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",i+3+c+j);
		}
		if(i==0)
		{
			c++;
		}
		else
		{
			c+=2;
		}
		printf("\n");
	}
	return 0;
}