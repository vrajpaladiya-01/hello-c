#include<stdio.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}

int main()
{
    int arr[2] = {26, 20};
    printf("%d %d \n", arr[0], arr[1]);
    fun(arr);
    printf("%d %d \n", arr[0], arr[1]);
    return 0;
}