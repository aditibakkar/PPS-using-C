#include<stdio.h>
int main()
{
	int num1,num2,mul;
	printf("Enter First Number :\t");
	scanf("%d",&num1);
	printf("\nEnter Second Number :\t");
	scanf("%d",&num2);
	mul=num1*num2;
	printf("\nMultiplication of %d and %d is %d",num1,num2,mul);
	return 0;
}
