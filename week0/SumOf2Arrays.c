#include <stdio.h>

void getArray(int array[][],int n,int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Enter value for array[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }
  }
}

void addArray(int array1[][], int array2[][], int result[][], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      result[i][j] = array1[i][j] + array2[i][j];
    }
  }
}

void displayArray(int array[][],int n,int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}


int main() {

  int array1[10][10], array2[10][10], result[10][10],n,m;
  printf("Enter num of rows and columns: ");
  scanf("%d %d",&n,&m);

  printf("Enter the values for array1:\n");
  getArray(array1,n,m);

  printf("\nEnter the values for array2:\n");
  getArray(array2,n,m);

  addArray(array1, array2, result,n,m);

  printf("\nThe sum of the two arrays is:\n");
  displayArray(result,n,m);

  return 0;
}

