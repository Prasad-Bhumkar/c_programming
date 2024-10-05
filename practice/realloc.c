#include <stdlib.h>
#include <stdio.h>

int main() {
    int *ptr;
    int n, new;

    printf("How many integers are there? ");
    scanf("%d", &n);

    // Allocating memory using calloc
    ptr = (int *) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory is not allocated!\n");
        exit(0);
    } else {
        printf("Memory has been successfully allocated!\n\n");

        printf("Enter your elements:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &ptr[i]);
        }
        printf("\n");

        printf("Your elements are:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t", ptr[i]);
        }
        printf("\n");

        // Get new size of array
        printf("Enter new size: ");
        scanf("%d", &new);

        // Using realloc
        int *temp = (int *) realloc(ptr, new * sizeof(int));
        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            free(ptr); // Free original memory to avoid leak
            exit(0);
        }

        ptr = temp;
        printf("Memory has been successfully reallocated!\n\n");

        // If new size is greater than old size, prompt for new elements
        if (new > n) {
            printf("Enter additional elements:\n");
            for (int i = n; i < new; i++) {
                scanf("%d", &ptr[i]);
            }
        }

        printf("Your elements are:\n");
        for (int i = 0; i < new; i++) {
            printf("%d\t", ptr[i]);
        }
        printf("\n");

        // Free allocated memory
        free(ptr);
    }

    return 0;
}
