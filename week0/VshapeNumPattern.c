#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j)
            {
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        for(j=i+1;j<=n;j++)
        {
            printf(" ");
        }
        for(j=i+1;j<n;j++)
        {
            printf(" ");
        }
        for(j=i;j<n;j++)
        {
            if(i==j)
            {
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }


        printf("\n");
    }
}
