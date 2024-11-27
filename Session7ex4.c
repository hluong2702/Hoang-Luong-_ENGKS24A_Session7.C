#include<stdio.h>

int main(){

    int numbers;

    printf("Moi ban nhap vao so phan tu cua mang ");
    scanf("%d",&numbers);

    int num[numbers];

    for(int i = 0; i<numbers;i++){
        printf("Phan tu so %d ",i+1);
        scanf("%d",&num[i]);
    }

    return 0;
}