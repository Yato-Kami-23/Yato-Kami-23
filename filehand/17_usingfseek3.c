#include <stdio.h>

int main() {
    FILE *file = fopen("Test.txt", "r+");  
    if (file == NULL) {
        printf("File not found!\n");        
        return 1;
    }
    fseek(file,10,SEEK_CUR);
    fprintf(file,"Good morning!");
    fclose(file);
    return 0;
}