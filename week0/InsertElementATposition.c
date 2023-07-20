
#include <stdio.h>

int main() {
    int i,j,pos,n,ele,temp,arr[100];
    printf("ENter array size:");
    scanf("%d",&n);
    printf("ENter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter element:");
    scanf("%d",&ele);
    n++;
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}