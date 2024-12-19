#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[5] = {34,76,12,56,87};

    int min =  INT_MAX;
    for(int i=0; i<=4; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}