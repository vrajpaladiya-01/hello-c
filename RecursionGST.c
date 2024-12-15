#include<stdio.h>


int calculateprice(float value);

int main()
{
    float value = 789;
    printf("price : %f \n", value);

    calculateprice(value);

    return 0;
}

int calculateprice(float value){

    value = value + (value * 0.18);
    printf("final value : %f \n", value);
}