#include <stdio.h>

void greetBlack(){
    puts("hello black\n");
}


void greetWhite(){
    puts("hello white\n");
}

int main(void){
    puts("hello everyone\n");
    greetWhite();
    greetBlack();
    return 0;
}