#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter : ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&(*(arr+i))); 
    }
    printf("Entered array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
    free(arr);
    return 0;
}