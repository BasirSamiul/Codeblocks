//Finding a  midpoint of an array using pointer.

#include <stdio.h>
#include <stdlib.h>

int *findMid( int a[], int len ){

    return &a[len / 2];

}

int main()
{
    int a [] = { 23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4
     };

    int len = sizeof(a) / sizeof(a[0]);

    int *mid = findMid(a, len);
    printf("\nThe MidPoint of the array is: %d", *mid);

    return 0;
}
