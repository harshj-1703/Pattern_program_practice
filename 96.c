#include<stdio.h>

int main()
{
	int i=0,j=0,k=1;
	for(i=0;i<5+2;i+=2)
	{
		printf("%d",k);
		k++;
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}