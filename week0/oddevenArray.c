#include<stdio.h>
int main()
{
    int odd[10],even[10],arr[20];
    int i,j,n,ec=0,oc=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("array before: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[ec]=arr[i];
            ec++;
        }
        else{
            odd[oc]=arr[i];
            oc++;
        }
    }
    printf("\nEven:");
    for(i=0;i<ec;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd:");
    for(i=0;i<oc;i++)
    {
        printf("%d ",odd[i]);
    }

}