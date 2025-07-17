#include<stdio.h>
int sum(int n1,int n2)
{
    int add;
    add=n1+n2;
    return add;
}
int sub(int n1,int n2)
{
    int sub;
    sub=n1-n2;
    return sub;
}
int mul(int n1,int n2)
{
    int mul;
    mul=n1*n2;
    return mul;
}
int div(int n1,int n2)
{
    int div;
    div=n1/n2;
    return div;
}
int main()
{
    int num1,num2,run;
    printf("Enter First Number :\t ");
    scanf("%d",&num1);
    printf("Enter Second Number :\t");
    scanf("%d",&num2);
    printf("\nEnter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
	printf("\nEnter The Number :\t");
    scanf("%d",&run);
    if (run==1)
    {
        printf("\nThe Addition of two numbers is %d",sum(num1,num2));
    }
    else if (run==2)
    {
        printf("\nThe Subtraction of two numbers is %d",sub(num1,num2));
    }
    else if (run==3)
    {
        printf("\nThe Multiplication of two numbers is %d",mul(num1,num2));
    }
    else if (run==4)
    {
        printf("\nThe Division of two numbers is %d",div(num1,num2));
    }
    return 0;
}
