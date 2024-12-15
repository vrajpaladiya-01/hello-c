#include<stdio.h>

int printTable(int n);

int main(){

    int n;

    printf("enter the n : ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}

int printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
}