#include<stdio.h>

int main(){

    int arr[5] = {2,4,6,8,10};
    int sumEven = 0;
    int sumOdd = 0;

    for(int i=0; i<=4; i++){
        if(i %2 == 0){
            sumEven += arr[i]; 
        }
        else{
            sumOdd += arr[i];
        }
    }
    int sum = sumEven - sumOdd;
    printf("%d ", sum);

    return 0;
}