#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
        if(i==0||i==n||j==0||j==n){
        printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }

    return 0;
}