// copy content
#include<stdio.h>

int main(){
    FILE *file1 = fopen("Test.txt","r");
    FILE *file2 = fopen("Test2.txt","w");
    char c;
    if(file1 == NULL || file2 == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    while((c = fgetc(file1))!= EOF){
        fputc(c,file2);
    }
    fclose(file1);
    fclose(file2);
    printf("Content copied successfully.\n");
    return 0;
}