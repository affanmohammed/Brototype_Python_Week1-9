#include <stdio.h>

int main()
{
    int n = 9,mid1,mid2;
    if(n%2==0)
    {
        mid2 = n / 2 + 1;
        mid1 = n / 2;
    }
    else
    {
        mid1=mid2= n / 2 + 1;
    }

    for (int i = 1; i <= mid2; i++) {

        for (int j = 1; j <= n; j++) {
            if (j <= mid1 - i + 1 || j >= mid2 + i - 1) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }

        printf("\n"); 
     
    }


    // loop through the remaining rows
    /*for (int i = mid + 1; i <= n; i++) {
        // print the left half of the row
        for (int j = 1; j <= n; j++) {
            if (j <= i - mid || j >= n - (i - mid) + 1) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }

        printf("\n"); // move to the next line

        // decrement the number of spaces to print on the next row
        space_count -= 2;
    }*/

    return 0;
}
