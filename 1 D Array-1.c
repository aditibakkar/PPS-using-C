#include<stdio.h>
int main()
{
    int marks[10],i;
    for(i=0;i<10;i++)
      {
        printf("\nEnter Marks of %d student : ",i+1);
        scanf("%d",&marks[i]);
      }
    for(i=0;i<10;i++)
      {
        printf("\n\nMarks of %d student are : %d",i+1,marks[i]);
      }
    return 0;
}
