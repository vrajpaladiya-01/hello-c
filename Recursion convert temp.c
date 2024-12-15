// #include<stdio.h>

// float convertTemp(float celsius);

// int main(){
//     float far = convertTemp(67);
//     printf("far : %f \n", far);
//     return 0;
// }

// float convertTemp(float celsius){
//     float far = celsius * 1.8 + 32;
//     return far;
// }



#include<stdio.h>

float convertTemperature (float celsis);

int main()
{
    printf("fahrenheit is %f \n", convertTemperature(4));
    return 0;
}

float convertTemperature (float celsis){
    float far = celsis * 1.8 + 32;
    return far;
}