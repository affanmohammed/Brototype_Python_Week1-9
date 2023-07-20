#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)  //top right
    {
        for(j=1;j<=i;j++)
        {
            if(i!=5)
            {
                if(j==i||j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf("*");
            }

        }

         for(j=5;j>=i;j--)   //top left
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i!=5)
            {
                if(j==1||j==i)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
            }
            else
            {
                printf("*");
            }
            
        }

        printf("\n");
    }


    /* for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)   //top left
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i!=5)
            {
                if(j==1||j==i)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    
    }
    */
}