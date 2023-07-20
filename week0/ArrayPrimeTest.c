#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int count_primes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i <= size; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    
    int n,arr[100],i;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = count_primes(arr,n);
    printf("The array has %d prime numbers.\n", count);
    return 0;
}
