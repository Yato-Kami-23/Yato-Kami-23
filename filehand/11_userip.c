// user input
#include<stdio.h>
int main(){
    FILE *file = fopen("Input.txt","w");
    if(file == NULL ){
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    fgets(line,sizeof(line),stdin);
    fputs(line,file);
    fclose(file);
    return 0;
}