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

    printf("Cac phan tu la SNT : \n");
    for (int i = 0; i < numbers; i++) {
        int prime = 1;
        if (num[i] < 2){
            prime = 0;
        }
        for (int j = 2; j * j <= num[i]; j++) {
            if (num[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ", num[i]);
        }
}

    return 0;
}    