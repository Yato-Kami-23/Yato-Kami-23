#include<stdio.h>

void mat_add(int mat1[][10],int mat2[][10], int r, int c){
    int mat3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat3[i][j]= mat1[i][j]+mat2[i][j];
        }
    }
    printf("Addition is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}


void mat_sub(int mat1[][10],int mat2[][10], int r, int c){
    int mat3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat3[i][j]= mat1[i][j]-mat2[i][j];
        }
    }
    printf("Subtraction is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}

void mat_mul(int mat1[][10],int mat2[][10], int r, int c){
    int mat3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat3[i][j]=0;
            for(int k=0;k<c;k++){
                mat3[i][j]= mat3[i][j] + mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Multiplication is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}
void mat_trans(int mat1[][10],int mat2[][10],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat2[j][i] = mat1[i][j];
        }
    }
    printf("Transpose of Mat A is :\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
}


int show_calc(){
    int n;
    printf("Enter 1 for Addition.\n");
    printf("Enter 2 for Subtraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Transpose.\n");
    printf("Enter 0 for EXIT.\n");
    printf("Enter : ");
    scanf("%d",&n);
    return n;
}


void calc(int mat1[][10],int mat2[][10],int n,int r,int c){
    switch(n){
        case 1: mat_add(mat1,mat2,r,c);
        break;
        case 2: mat_sub(mat1, mat2,r,c);
        break;
        case 3: mat_mul(mat1,mat2,r,c);
        break;
        case 4: mat_trans(mat1,mat2,r,c);
        break;
    }
}


int main(){
    int n,c,r;
    printf("\t\tWELCOME TO MATRIX CALCULATOR!!!\n\n");
    printf("Enter desired number of rows and column: ");
    scanf("%d%d", &r,&c);
    int matA[10][10], matB[10][10], matC[10][10];
    n=show_calc();

    while (1) {
        n = show_calc();
        if (n == 0) {
            printf("\t\tTHANK YOU FOR USING.\n");
            break;
        }
        if (n < 4 && n > 0) {
            printf("Enter matrix A:\n");
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    scanf("%d", &matA[i][j]);
                }
            }
            printf("\nEnter matrix B:\n");
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    scanf("%d", &matB[i][j]);
                }
            }
            calc(matA, matB, n, r, c);
        } else if (n == 4) {
            printf("Enter matrix A:\n");
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    scanf("%d", &matA[i][j]);
                }
            }
            calc(matA, matC, n, r, c);
        } else {
            printf("Enter a valid option.\n");
        }
    }

}
