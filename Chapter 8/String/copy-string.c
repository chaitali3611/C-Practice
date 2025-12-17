#include <stdio.h>
#include <string.h>

int main(){
    char oldString[] = "oldString";
    char newString[] = "newstring";
    strcpy(newString, oldString);
    puts(newString);
    return 0;
}