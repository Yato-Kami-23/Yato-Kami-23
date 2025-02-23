// write in a file 
#include<stdio.h>
int main(){
    FILE *file = fopen("Test.txt","w");
    if(file == NULL){
        perror("Error opening file!\n");
        return 1;
    }
    fprintf(file,"%d",8);
    fclose(file);
    return 0;
}