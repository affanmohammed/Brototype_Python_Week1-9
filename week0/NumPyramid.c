#include <stdio.h>
int main() {
    int n = 5; 
    int i, j, k;
    int num = 1;
    
    for(i = 1; i <= n; i++) {
        k = i; 
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++) {
            printf("%d", k);
            if(j < i) {
                k++; 
            } else {
                k--; 
            }
        }
        printf("\n");
    }
    
    return 0;
}
