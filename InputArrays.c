#include<stdio.h>

int main()
{
    int arr[3];

    printf("Enter the first eliment : ");
    scanf("%d", &arr[0]);
    printf("Enter the second elements : ");
    scanf("%d", &arr[1]);
    printf("Enter the third elements : ");
    scanf("%d", &arr[2]);
    
    printf("%d", arr[2]);

    return 0;
}