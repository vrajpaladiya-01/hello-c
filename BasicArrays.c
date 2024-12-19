#include<stdio.h>

int main()
{
    int arr[5] = {2,4,6,8,10};
    arr[4] = 100;
    arr[1] = 120;
    printf("%d \n", arr[1]);

    float brr[3] = {1.2,3.4,5.6};
    printf("%f \n", brr[0]);

    char crr[4] = {'a', 'A', '%', 'c'};
    printf("%c \n", crr[2]);
    
    int drr[3];
    drr[0] = 11;
    drr[1] = 22;
    drr[2] = 33;
    printf("%d \n", drr[1]);
    
    return 0;
}