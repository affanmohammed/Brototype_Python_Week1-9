#include<stdio.h>
int prm(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<=n/2;i++)
     {
        if(n%i==0)
        {
            return 0;
        }
     }
      return 1;   

}

void shift_array(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] % 2 == 1 && left < right) {
            left++;
        }
        while (arr[right] % 2 == 0 && left < right) {
            right--;
        }
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main()
{
    int i,j,arr[100],n,sum=0;
    printf("Enter limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if(sum>50)
    {
        for(i=0;i<n;i++)
        {
            int j=0;
            if(prm(arr[i]))
            {   
                arr[i]=arr[i+1];
                i++;
            }
        }
    }
    else
    {
        shift_array(arr,n);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}