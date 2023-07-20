#include<stdio.h>
int main()
{
    int arr[100],size,key,i;
    printf("enter the size: ");
    scanf("%d",&size);
    printf("\nenter the elements: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            printf("element found at position %d",i+1);
            break;
        }
    }
    return 0;
}