#include<stdio.h>

    void printString(char arr[]);

int main()
{
    char firstName[] = "vraj";
    char lastName[] = "paladiya";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}