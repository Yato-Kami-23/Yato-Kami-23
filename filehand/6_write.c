// write in a file 
#include<stdio.h>
int main(){
    FILE *file = fopen("Test.txt","w");
    if(file == NULL){
        printf("Eror opening file!\n");
        return 1;
    }
    fprintf(file,"Hello World!\n");
    fclose(file);
    return 0;
}