#include <stdio.h>

int main() {
  int rows = 5;

  // Upper half of the diamond
  for (int i = rows; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }

    // Print 2*(rows-i) spaces for each line
    for (int k = 1; k <= 2*(rows-i); k++) {
      printf(" ");
    }

    for (int j = 1; j <= i; j++) {
      printf("*");
    }

    // Move to the next line
    printf("\n");
  }

  // Lower half of the diamond
  for (int i = 2; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }

    // Print 2*(rows-i) spaces for each line
    for (int k = 1; k <= 2*(rows-i); k++) {
      printf(" ");
    }

    for (int j = 1; j <= i; j++) {
      printf("*");
    }

    // Move to the next line
    printf("\n");
  }

  return 0;
}
