#include<stdio.h>

int calculatepercentage(int physics, int chemistry, int maths);

int main()
{
    int physics = 98;
    int chemistry = 78;
    int maths = 99;

    printf("%d", calculatepercentage(physics, chemistry, maths));

    return 0;
}

int calculatepercentage(int physics, int chemistry, int maths){
    return((physics + chemistry + maths) / 3) ;  
}

