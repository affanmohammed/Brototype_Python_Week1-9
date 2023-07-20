#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i,j,n,uni=0;
    char name[100];
    printf("enter a string: ");
    scanf("%s",name);
    printf("Entered string is: %s",name);
    for(i=0;i<strlen(name);i++)
    {
        count++;
    }
    printf(" has %d characters\n",count);
    for(i=0; i<count; i++)
    {
      for(j=0; j<i; j++) 
      {
         if(name[i] == name[j]) 
         {
            break;
         }
      }
      if(i == j) {
         uni++;
      }
   }
   printf("Unique elements: %d\n",uni);
   int len = strlen(name);
   for (i = 0; i < len; i++) {
        int flag = 0;
        for (j = 0; j < i; j++) {
            if (name[i] == name[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            printf("%c ", name[i]);
        }
    
   }
}