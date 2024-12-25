#include <stdio.h>

int main() {
    FILE *file = fopen("Test.txt", "r+");  
    if (file == NULL) {
        printf("File not found!\n");        
        return 1;
    }
    fseek(file,0,SEEK_END);
    fprintf(file,"Good morning!");
    fclose(file);
    return 0;
}