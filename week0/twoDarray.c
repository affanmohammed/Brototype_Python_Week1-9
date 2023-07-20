#include <stdio.h>

#define ROWS 3
#define COLS 3

void getArray(int array[][COLS]);
void addArray(int array1[][COLS], int array2[][COLS], int result[][COLS]);
void displayArray(int array[][COLS]);

int main() {
  int array1[ROWS][COLS], array2[ROWS][COLS], result[ROWS][COLS];

  printf("Enter the values for array1:\n");
  getArray(array1);

  printf("\nEnter the values for array2:\n");
  getArray(array2);

  addArray(array1, array2, result);

  printf("\nThe sum of the two arrays is:\n");
  displayArray(result);

  return 0;
}

void getArray(int array[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("Enter value for array[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
}

void addArray(int array1[][COLS], int array2[][COLS], int result[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = array1[i][j] + array2[i][j];
    }
  }
}

void displayArray(int array[][COLS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}
