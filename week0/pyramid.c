/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<=((2*n)-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/