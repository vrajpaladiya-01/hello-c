#include<stdio.h>

int main()
{
    int age;
    printf("enter a age : ");
    scanf("%d", &age);

    if(age > 18){
        printf("adult \n");
    }
    else {
        printf("not adult \n");
    }
    printf("thank you \n");
    return 0;
}