// read a file
#include<stdio.h>
int main(){
    FILE *file = fopen("Test.txt","r");
    char line[100];
    if(file == NULL){
        printf("Eror opening file!\n");
        return 1;
    }
    while(fgets(line,sizeof(line),file)){
        printf("%s",line);
    }
    fclose(file);
    return 0;
}