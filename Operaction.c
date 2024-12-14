#include <stdio.h>

int main()
{
    int a, b;

    printf("enter a :");
    scanf("%d", &a);

    printf("enter b :");
    scanf("%d", &b);

    int add = a + b;
    printf("addition is : %d \n", add);

    int sub = a - b;
    printf("subtraction is : %d \n", sub);

    int mul = a * b;
    printf("multiplication is : %d \n", mul);

    int div = a / b;
    printf("division is : %d \n", div);

    int mod = a % b;
    printf("modulo is : %d \n", mod);

    return 0;
}