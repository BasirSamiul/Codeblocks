//Passing value in an array.
#include <iostream>

void show (int [], int);

int main()
{
    int arr [] {25,36,25,33,22,58,5};
    int length = 7;
    show(arr, length);

    return 0;
}
void show (int arr[], int length){
    for (int i = 0; i < length; i++){
        std :: cout << arr[i] << std :: endl;
    }
}
