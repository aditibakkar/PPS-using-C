#include<stdio.h>
int main()
{
	int marks;
	printf("Enter The Marks : ");
	scanf("%d",&marks);
	if(marks>100)
	{
		printf("Invalid Marks");
	}
	else if(marks>=90)
	{
		printf("Excellent");
	}
	else if(marks>=80)
	{
		printf("Grade : A");
	}
	else if(marks>=70)
	{
		printf("Grade : B");
	}
	else if(marks>=60)
	{
		printf("Grade : C");
	}
	else if(marks>=50)
	{
		printf("Grade : D");
	}
	else if(marks>=40)
	{
		printf("Grade : E");
	}
	else if(marks<40&&marks>=0)
	{
		printf("Fail");
	}
	else
	{
		printf("Invalid Marks");
	}
	return 0;
}
