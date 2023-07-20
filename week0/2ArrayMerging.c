#include<stdio.h>
int main()
{
    int i,j,k,n,a[20],b[20],c[20];
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter array2:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }  
    printf("\nArray1:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    } 
    printf("\nArray2:");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    } 
    printf("Merging:");
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        c[n+i]=b[i];
    }
    printf("New array: ");
    for(i=0;i<2*n;i++)
    {
        printf("%d",c[i]);
    }

    

}