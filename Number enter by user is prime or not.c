#include<stdio.h>
int main()
{
    int num,i,rem,check=0;
    printf("Enter The Number:");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
     rem=num%i;
     if (rem==0)
     {
        check=1;
        break;
     }
    }
    if (check==0)
    {
       printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}    
