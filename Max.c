#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5] = {-10, -34, -156, -2, -99};
    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0; i<=4; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}