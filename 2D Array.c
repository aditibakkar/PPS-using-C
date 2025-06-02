#include<stdio.h>
int main()
{
    int a[3][4]={{1,5,3,1},{2,9,2,2},{3,8,9,9}},i,j;
    for (i=0;i<3;i++)
    {
       for(j=0;j<4;j++)
        {
           printf("%d",a[i][j]);
        }
           printf("\n");
    } 
    return 0;   
}
