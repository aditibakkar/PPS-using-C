#include<stdio.h>
int main()
{
	int num1,num2,sub;
	printf("Enter First Number :\t");
	scanf("%d",&num1);
	printf("\nEnter Second Number :\t");
	scanf("%d",&num2);
	sub=num1-num2;
	printf("\nSubtraction of %d and %d is %d",num1,num2,sub);
	return 0;
}
