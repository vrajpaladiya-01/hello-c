#include<stdio.h>

int main()
{
    int a, b;

    printf("enter youre first number : ");
    scanf("%d", &a);

    printf("enter your second number : ");
    scanf("%d", &b);

    int q = a / b;
    int r = a - (b * q);

    printf("the reminder when : %d is dividend by : %d is : %d", a, b, r);

    return 0;

}