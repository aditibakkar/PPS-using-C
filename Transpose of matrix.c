#include<stdio.h>
int main()
{
    int a[4][4]={{3,4,5,7},{1,2,3,8},{7,8,9,1},{6,5,2,4}};
    int b[4][4],i,j;
    printf("Matrix A");
    printf("\n");
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
         printf("%d\t",a[i][j]);   
       }
       printf("\n");
    } 
    printf("\nTranspose of Matrix A");
    printf("\n");  
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
         b[i][j]=a[j][i];
         printf("%d\t",b[i][j]);   
       }
       printf("\n");
    }   
    return 0; 
}
