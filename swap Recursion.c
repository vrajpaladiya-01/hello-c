#include<stdio.h>

void swap(int a, int b);

int main()
{
    int x = 4, y = 10;
    swap(x,y);
    printf("a = %d \nb = %d \n", x,y);

    return 0;
}

void swap(int a, int b){
        int t = a;
        a = b;
        b = t;

        printf("a = %d \nb = %d \n", a,b);
}