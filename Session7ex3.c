#include<stdio.h>

int main(){

    int numbers[5]={1,2,3,4,6};
    int count =1;
    for(int i =0;i<5;i++){
        if(numbers[i] % 2 ==0){
            printf("So chan la %d\n",numbers[i]);
        }
        count++;
    }
    if(count == 1){
        printf("Mang k chua so chan ");
    }
    return 0;
}