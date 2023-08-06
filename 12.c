#include<stdio.h>

int main()
{
	int i,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i%2==0)
			{
				printf("%d ",(i*5)+(j+1));
			}
			else
			{
				printf("%d ",((i+1)*5)-j);
			}
		}
		printf("\n");
	}
	return 0;
}