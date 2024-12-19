#include<stdio.h>
int main(){
    int arr[10] = {5,6,7,8,9,2,4,1,3,10};

    for(int i=0; i<=9; i++){
        if(i%2!=0){
            arr[i] = arr[i] * 2;
        }
        else{
            arr[i] = arr[i] + 10;
        }
    }

    // for(int i=0; i<=9; i++){
    //     if(i %2 != 0) arr[i]*=2;
    //     else arr[i] += 10;
    // }

    for(int i=0; i<=9; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}