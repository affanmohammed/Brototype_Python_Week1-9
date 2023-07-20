#include<stdio.h>

int prm(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,j,arr[100],n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("\nEnter array:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nArray of non prime: ");

    for(i=0;i<n;i++)
    {
        if(!prm(arr[i]))
        {
            printf("%d ",arr[i]);
        }
        
    }
    int len=n;
    for(i=0;i<n;i++)
    {
        if(prm(arr[i]))
        {
            for(j=i;j<len;j++)
            {
                arr[j]=arr[j+1];
            }
            i--;
        len--;     
        }
       
    }
    printf("\n new array");
    for(i=0;i<len;i++)
    {
        printf("\n%d ",arr[i]);
    }

    
}