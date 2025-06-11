#include<stdio.h>
int main()
{
    int pin,i,c=2911;
    for(i=1;i<=3;i++)
    {
      printf("\nEnter The Pin :\t");
      scanf("%d",&pin);
      if(pin==c)
       {
          printf("Correct Pin.\nCollect your cash.");
          break;       
       }        
      else if(i==3)
       {
          printf("\nATM has been blocked,try after 24 hours.");     
       }
      else if(c!=pin)
       {
          printf("Incorrect pin , please try again.\n");   
       }       
    }
    return 0;
}
