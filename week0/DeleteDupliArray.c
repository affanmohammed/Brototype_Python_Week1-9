// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,arr[100],n=10;
    printf("Enter array of 10 elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}