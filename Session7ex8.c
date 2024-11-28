#include<stdio.h>

int main(){
    int row, col;

    printf("Moi ban nhap vao so hang cua mang ");
    scanf("%d",&row);

    printf("Moi ban nhap vao so cot cua mang ");
    scanf("%d",&col);

    int arr[row][col];

    int i,j;
    for(i=0;i<row;i++){
        for(j = 0;j<col;j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}