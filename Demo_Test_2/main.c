//Here is the program that contains Automatic variable and it show the warning of returning of function address an local variable.

#include <stdio.h>
#include <stdlib.h>

int *fun(){
    int i = 10;
    return &i;
}

int main()
{
    int *p = fun();
    printf("%d", *p);

    return 0;
}
