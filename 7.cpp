#include <stdio.h>

void inputArray(int *arr, int rows, int cols);
void printArray(int *arr, int rows, int cols);

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    inputArray(&arr[0][0], rows, cols);
    printArray(&arr[0][0], rows, cols);

    return 0;
}


}

void printArray(int *arr, int rows, int cols) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(arr + i*cols + j));
        }
        printf("\n");
    }
}

