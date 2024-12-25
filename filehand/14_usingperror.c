#include <stdio.h>

int main() {
    FILE *file = fopen("test3.txt", "r");
    if (file == NULL) {
        perror("File Error");
        return 1;
    }
    fclose(file);
    return 0;
}
