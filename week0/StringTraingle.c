#include <stdio.h>
#include <string.h>

int main() 
{
   char s[100];
   int i,j,n;
   scanf("%s",s);
   printf("Entered string is %s\n",s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
       for(j=0;j<=i;j++)
       {
           printf("%c",s[j]);
       }
       printf("\n");
   }

    return 0;
}