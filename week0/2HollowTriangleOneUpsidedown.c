#include <stdio.h>

int main() {
  int rows ;
  scanf("%d",&rows);
  printf("\n\n");

  // Upper half of the pattern
  for (int i = 1; i <= rows; i++) {
    // Print rows-i spaces at the beginning of each line
    for (int j = 1; j <= rows-i; j++) {
      printf(" ");
    }

    // Print 1 or 2 asterisks and spaces for each line
    for (int k = 1; k <= 2*i-1; k++) {
      if (k == 1 || k == 2*i-1 || i == rows) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    // Move to the next line
    printf("\n");
  }

  // Lower half of the pattern
  for (int i = rows-1; i >= 1; i--) {
    // Print rows-i spaces at the beginning of each line
    for (int j = 1; j <= rows-i; j++) {
      printf(" ");
    }

    // Print 1 or 2 asterisks and spaces for each line
    for (int k = 1; k <= 2*i-1; k++) {
      if (k == 1 || k == 2*i-1 || i == rows) {
        printf("*");
      } else {
        printf(" ");
      }
    }

    // Move to the next line
    printf("\n");
  }

  return 0;
}
