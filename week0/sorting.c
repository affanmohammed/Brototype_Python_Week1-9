#include<stdio.h>
int main()
{
    int i,j,arr[100],n,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nUnsorted Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    printf("\nHighest = %d",temp);
    for(i=0;i<n;i++)
    {
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
    printf("\nSorting.........\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}