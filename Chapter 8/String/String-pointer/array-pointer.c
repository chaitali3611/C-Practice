#include <stdio.h>
int main(){
    char cannotChange[] = "Hello World";
    puts(cannotChange);
    cannotChange = "Hello";
    puts(cannotChange);   //can not run this code

    return 0;
}