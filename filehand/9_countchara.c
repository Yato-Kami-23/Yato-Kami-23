#include<stdio.h>
int main(){
    FILE *file = fopen("Test.txt","r");
    int count=0;
    char c;
    if(file == NULL){
        printf("Eror opening file!\n");
        return 1;
    }
    while((c = getc(file))!= EOF){
        count++;
    }
    printf("Total characters: %d\n",count);
    fclose(file);
    return 0;
}