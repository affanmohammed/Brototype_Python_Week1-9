#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    // loop for each row
    for (i = 1; i <= n; i++) {

        // print leading asterisk
        printf("*");

        // print numbers and asterisks in the row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        for (j = 1; j <= n-i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // loop for each row after the middle row
    for (i = n-1; i >= 1; i--) {

        // print leading asterisk
        printf("*");

        // print numbers and asterisks in the row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        for (j = 1; j <= n-i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
