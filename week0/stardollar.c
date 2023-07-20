#include <stdio.h>
int main() 
{
   int i,j,k,r=1,c=3;
   for(i=1;i<=4;i++)
   {
     for(j=1;j<=r;j++){
        for(k=1;k<=r;k++){
            printf("*");
        }
        printf("\n");
     }
     r++;
     for(j=1;j<=c;j++)
     {
        if(j%2==0)
        {
            printf("$");
        }
        else{
            printf("*");
        }
     }
     c=c+3;
     printf("\n");
       
   }
}