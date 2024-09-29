#include <stdio.h>
#define max 10

int i,j;

typedef struct matrix{
    int size[2];
    int matrx[max][max];
} matrix;

void display(matrix *mat){
    for(i=0;i<mat->size[0];i++){
        printf("|");
        for(j=0;j<mat->size[1];j++){
            printf(" %d ",mat->matrx[i][j]);
        }
        printf("|\n");
    }
}

void init_mat(matrix* mat){
    printf("Enter the size of the matrix (max:10x10)\n");
    scanf("%d%d",&mat->size[0],&mat->size[1]);
    if(mat->size[0]<max && mat->size[1]<max){
    printf("Enter the Elements of matrix\n");
    for(i=0;i<mat->size[0];i++){
        for(j=0;j<mat->size[1];j++){
            scanf("%d",&mat->matrx[i][j]);
        }
    }
    display(mat);}
    else{
        printf("Invalid size\n");
    }
}

void mat_add(matrix* mata,matrix* matb){
    matrix matc;
    printf("Matrix addition\n");
    if((mata->size[0]==matb->size[0])&&(mata->size[1]==matb->size[1])){
        matc.size[0]=mata->size[0];
        matc.size[1]=mata->size[1];
        for(i=0;i<matc.size[0];i++){
        for(j=0;j<matc.size[1];j++){
            matc.matrx[i][j]=mata->matrx[i][j]+matb->matrx[i][j];
        }
    }
    display(&matc);
    }
    else{
        printf("Invalid Matrix addition\n");
    }
}

void mat_mul(matrix* mata,matrix* matb){
    matrix matc;
    printf("Matrix multiplication\n");
    if(mata->size[1]==matb->size[1]){
        matc.size[0]=mata->size[0];
        matc.size[1]=mata->size[1];
        for(i=0;i<matc.size[0];i++){
        for(j=0;j<matc.size[1];j++){
            matc.matrx[i][j]=mata->matrx[i][j]+matb->matrx[i][j];
        }
    }
    }
}

int main()
{
    matrix mat1;
    matrix mat2;
    init_mat(&mat1);
    init_mat(&mat2);
    mat_add(&mat1,&mat2);
    return 0;
}
