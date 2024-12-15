#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    char ch;
    printf("enter i for india && f for franch : ");
    scanf("%c", &ch);

    if(ch == 'i'){
        Namaste();
    }
    else{
        Bonjour();
    }
    return 0;
}
void Namaste(){
    printf("Namaste \n");
    // Bonjour();
}

void Bonjour(){
    printf("Bonjour \n");
}