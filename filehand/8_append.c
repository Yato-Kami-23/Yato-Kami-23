// append
#include<stdio.h>
int main(){
    FILE *file = fopen("Test.txt","a");
    if(file == NULL){
        printf("Eror opening file!\n");
        return 1;
    }
    fprintf(file,"Appending some data.\n");
    fclose(file);
    return 0;
}