#include<stdio.h>
int main()
{
    int marks[10] = {100, 97, 32, 56, 49, 11, 29, 89, 92, 95};

    for(int i=0; i<=9; i++){
        if(marks[i] < 35){
            printf("%d ", i);
        }
    }
    return 0;
}