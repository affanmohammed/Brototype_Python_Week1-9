#include<stdio.h>
#include<math.h>
int isPrime(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return 0; 
        }
    }
    return 1;

}

void ppr(int arr[],int n)
{
    int i,count=0,p;
        for(i=0;i<n;i++)
        {
            if(arr[i]<=1)
                continue;
            p=isPrime(arr[i]);
            if(p==1)
                {
                    count++;
                    printf("%d is prime \n",arr[i]);
                }
            else
                printf("%d is not prime \n",arr[i]);
            
        } 
        printf("No of prime nums= %d",count);
}

int main()
{
    int n,arr[100],i;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ppr(arr,n);
}
