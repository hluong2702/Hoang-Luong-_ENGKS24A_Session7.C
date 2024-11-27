#include<stdio.h>

int main(){

    int numbers[]={1,2,3,4,5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for(int i =0;i<5;i++){
        printf(" cac phan tu trong day la %d ",numbers[i]);
    }
    printf("\n");
    printf("do dai cua mang la %d ",length);

    return 0;
}