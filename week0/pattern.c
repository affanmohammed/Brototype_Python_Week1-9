// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int c=1,r=2,i,j,k,l,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=c;j++)
      {
          for(l=1;l<=r;l++)
          {
              printf("* ");
          }
          printf("\n");
      }
      r+=r;
      c+=c;
      if(i==n)
      {
          break;
      }
      for(k=1;k<=3;k++)
      {
          printf("*\n");
      }
   }

    return 0;
}