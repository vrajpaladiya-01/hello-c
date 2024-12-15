#include<stdio.h>

int fact(float n);

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    printf("factorial is : %d \n", fact(n));
    return 0;
}

int fact(float n){
    if(n == 1){
        return 1;
    }
    float factNm1 = fact(n - 1);
    float factN = factNm1 * n;
    return factN;
}