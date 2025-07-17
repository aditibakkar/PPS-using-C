#include<stdio.h>
int main()
{
	int i,j,a,num=1;
	for(i=1;i<=4;i++)
	{
		for(a=1;a<=4-i;a++)
		{
			printf("   ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%2d ",num++);
		}
		printf("\n");
	}
	return 0;
}
