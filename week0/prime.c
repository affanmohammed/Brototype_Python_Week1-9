#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nnumber %d is prime ",n);
    }
    else
    {
        printf("Not prime number");
    }
}