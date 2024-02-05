#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {5,3,6,5,3,2};
    int sum = 0, *p;

    for(p = a; p <= a + 4; p++){
        sum += *p;
    }
    printf("The sum of the array is: %d", sum);



    return 0;
}
