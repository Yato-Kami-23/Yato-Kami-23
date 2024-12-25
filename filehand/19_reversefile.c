#include <stdio.h>

int main() {
    FILE *file = fopen("Test.txt", "r");  
    if (file == NULL) {
        printf("File not found!\n");        
        return 1;
    }

    fseek(file, 0, SEEK_END);               
    int size = ftell(file);    
    printf("%d",size);             
    for (int i = 1; i <= size; i++) {
        fseek(file, -i, SEEK_END);          
        printf("%c", fgetc(file));          
    }
    fclose(file);                           
    return 0;
}