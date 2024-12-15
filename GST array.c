#include<stdio.h>

int main()
{
    float price[5];

    printf("shirt price : ");
    scanf("%f", &price[0]);

    printf("t-shirt price : ");
    scanf("%f", &price[1]);

    printf("hoodie price : ");
    scanf("%f", &price[2]);

    printf("socks price : ");
    scanf("%f", &price[3]);

    printf("shoes price : ");
    scanf("%f", &price[4]);

    printf("all tax including shirt price : %f \n", price[0] + ((0.18) * price[0]));
    printf("all tax including t-shirt price : %f \n", price[1] + ((0.18) * price[1]));
    printf("all tax including hoodie price : %f \n", price[2] + ((0.18) * price[2]));
    printf("all tax including socks price : %f \n", price[3] + ((0.18) * price[3]));
    printf("all tax including shoes price : %f \n", price[4] + ((0.18) * price[4]));

    return 0;
}