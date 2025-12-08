#include <stdio.h>
int main()
{
    //decrement operator
    //--i (pre increment)
    //i-- (post increment)

    int i=1;
    printf("%d \n", i--);  //use, then decrese
    printf("%d \n", i);

    printf("%d \n", --i);  //decrese, then use
    printf("%d \n", i);
    return 0;
}