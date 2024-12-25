#include <stdio.h>

int main() {
    FILE *file = fopen("Test.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }
    printf("File opened successfully.\n");

    if (fclose(file) == 0) {
        printf("File closed successfully.\n");
    } else {
        printf("Error: File not closed properly.\n");
    }
    return 0;
}