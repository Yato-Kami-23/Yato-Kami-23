#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int fac(int x){
    if(x==1 || x==0){
        return 1;
    }
    int q=fac(x-1)*x;
    return q;
}
int comb(int n,int r){
    int Z=fac(n)/(fac(r)*fac(n-r));
    return Z;
}

int main(){
    // int n;
    // printf("Enter array size: ");
    // scanf("%d",&n);
    // int *arr = (int*)malloc(n*sizeof(int));
    // printf("Enter in set: ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // //insertion
    // int key,j;
    // for(int i=1;i<n;i++){
    //     key=arr[i];
    //     j=i-1;
    //     while(j >=0 && arr[j]>key){
    //         arr[j+1]= arr[j];
    //         arr[j]=key;
    //         j--;
    //     }
    //     arr[j+1]=key;
    // }
    // printf("After sorting: ");
    // int i=0;
    // while(i<n){
    //     printf("%d ",arr[i]);
    //     i++;
    // }
//     int n;
//     printf("Enter n:\n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int s=0;s<n-i;s++){
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++){
//             printf("%d ",comb(i,j));
//         }
//         printf("\n");
//     }
//    return 0;
    int n=5;
    char cities[n][100];
    for(int i=0;i<n;i++){
        printf("Enter city %d : ",i+1);
        fgets(*(cities+i),100,stdin);
        //cities[i][strcspn(cities[i], "\n")] = '\0';
    }
    printf("Sorting\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(*(cities+j),*(cities+j+1))>0){
                char temp[100];
                strcpy(temp,*(cities+j));
                strcpy(*(cities+j),*(cities+j+1));
                strcpy(*(cities+j+1),temp);
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",cities[i]);
    }
}