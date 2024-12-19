#include<stdio.h>

int main()
{
    int n, m;

    printf("enter number row : ");
    scanf("%d", &n);

    printf("enter number coloun : ");
    scanf("%d", &m);

    // *******..... upto n no of stars 
    for(int i=1; i<=n; i++){                // no of row = no of line = outer loop
        for(int i=1; i<=m; i++){            // no of coloun = no of star in each line = inner loop 
            printf("* ");
        }
        printf("\n");                       //get a new line after each line
    }
    return 0;
}