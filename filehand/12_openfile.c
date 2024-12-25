#include <stdio.h>

int main() {
    FILE *file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fclose(file);
    return 0;
}