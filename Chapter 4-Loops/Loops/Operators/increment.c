#include <stdio.h>
int main()
{
    //increment operator
    //++i (pre increment)
    //i++ (post increment)

    int i=1;
    printf("%d \n", i++);  //use, then increse
    printf("%d \n", i);

    printf("%d \n", ++i);  //increse, then use
    printf("%d \n", i);
    return 0;
}