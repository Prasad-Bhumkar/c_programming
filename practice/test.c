#include <stdio.h>

#define SIZE 10  // Maximum size of the array

void insertValue(int arr[], int *currentSize, int value);

void insertValue(int arr[], int *currentSize, int value) {
    if (*currentSize < SIZE) {
        arr[*currentSize] = value;
        (*currentSize)++;
        printf("Element %d inserted successfully.\n", value);
    } else {
        printf("Array is full. Cannot insert new element.\n");
    }
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};  // Initial 5 integers
    int currentSize = 5;  // Number of initialized elements
    int newValue;

    printf("Array before insertion:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Enter a new element to insert: ");
    scanf("%d", &newValue);

    insertValue(arr, &currentSize, newValue);

    printf("Array after insertion:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
