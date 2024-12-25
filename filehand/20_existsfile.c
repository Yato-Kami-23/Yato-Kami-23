#include <stdio.h>

int main() {
    FILE *file = fopen("test3.txt", "r");
    if (file == NULL) {
        printf("Error: File does not exist.\n");
    } else {
        printf("File exists.\n");
        fclose(file);
    }
    return 0;
}