#include<stdio.h>

int main(){

    int numbers[5]={1,2,3,8,9};
    int max = numbers[0];
    int min = numbers[0];
    for(int i = 0;i<5;i++){
       if(numbers[i]> max){
        max = numbers[i];
    }
       if(numbers[i]< min){
        min = numbers[i];
       }

}
    printf("Max %d\n",max);
    printf("Min %d\n",min);
    return 0;
}    
