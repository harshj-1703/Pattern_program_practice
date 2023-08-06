#include<stdio.h>

int main()
{
	int i=0,j=0,k=0,l=0,m=0;
	for(i=4;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",j+1);
		}
		for(m=4;m>=i;m--)
		{
			printf("  ");
		}
		for(l=0;l<4-i;l++)
		{
			printf("  ");
		}
		for(k=0;k<i;k++)
		{
			printf("%d ",i-k);
		}
		printf("\n");
	}
	return 0;
}