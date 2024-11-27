#include<stdio.h>

int main(){

    int numbers[5]={2,3,6,7,9};

    for( int i = 0;i<5;i++){
        if(numbers[i] % 2 ==0){
            numbers[i]+=3;
        }else{
            numbers[i]+=2;
        }
     printf("%d ",numbers[i]);
    }
    return 0;
}