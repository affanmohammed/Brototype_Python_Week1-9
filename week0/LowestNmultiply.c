#include<stdio.h>
int main()
{

    int arr[100],i,j,n,low;
    printf("Enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    low=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<low)
        {
            low=arr[i];
        }
    }
    printf("\nLowest number is: %d\n",low);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i*low);
    }

}