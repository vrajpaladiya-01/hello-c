#include<stdio.h>
#include<math.h>

int main()
{
    printf("%d \n", 4>3 && 5>2);
    printf("%d \n", 3>4 && 5>2);

    printf("%d \n", !( (5>2) && (3>4) ) );
    return 0;
}




// //  AND gate :-   T T = T       OR gate :-   T T = T         NOT gate :-   T = F
//                   T F = F                    T F = T                       F = T 
//                   F T = F                    F T = T
//                   F F = F                    F F = F