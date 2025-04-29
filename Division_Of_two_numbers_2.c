#include<stdio.h>
int main()
{
	int num1,num2,div;
	printf("Enter First Number :\t");
	scanf("%d",&num1);
	printf("\nEnter Second Number :\t");
	scanf("%d",&num2);
	div=num1/num2;
	printf("\nDivision of %d/%d is %d",num1,num2,div);
	return 0;
}
