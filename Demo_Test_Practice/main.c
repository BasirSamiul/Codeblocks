//Finding the maximum and minimum element in an array by using pointers.
#include <stdio.h>

void minMax(int arr [], int len, int *min, int *max){

    int i;
    *min = *max = arr[0];
    for(i = 1; i < len; i++){
    if(arr[i] > *max){
        *max = arr[i];
    }
     if(arr[i] < *min){
        *min = arr[i];
    }

    }

}

int main()
{
    int a [] = { 23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5 };

    int min, max;

    int len = sizeof(a) / sizeof(a[0]);
    minMax( a, len, &min, &max);
    printf("The Minimum value is: %d \nThe Maximum value is: %d", min, max);

   return 0;
}
