#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    
    return 0;
}