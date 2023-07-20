#include<stdio.h>
int main()
{
    int arr[100],i,j,n,high,sum=0,sum2,temp;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    high=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            high=arr[i];
        }
    }
    printf("\nHighest number=%d\n",high);

    for (i = 0; i < n; i++) {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    for(i=0;i<n;i++)
    {

    for(j=0;j<n-1;i++)
    {   
        sum=0;
        sum2=sum2+arr[i];
    }
    if(sum2>high)
    {
        
    }
    }


}