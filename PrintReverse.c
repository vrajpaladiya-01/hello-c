#include<stdio.h>

int main()
{
    int arr[5];

    for(int i=0; i<=4; i++){
        printf("\n Enter elements number %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=4; i>=0; i--){
        printf("%d \t", arr[i]);
    }
    return 0;
}