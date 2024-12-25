#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 3;
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter arr: ")
    for (int i = 0; i < n; i++) {
        scanf("%d",&(*(arr+i)));
    }

    n = 5;
    arr = (int *)realloc(arr, n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
    printf("Enter arr: ")
    for (int i = 0; i < n; i++) {
        scanf("%d",&(*(arr+i)));
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
