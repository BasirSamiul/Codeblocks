//Printing an array which take the parameter of array and size.
#include <iostream>

void printArray(int [], int);

int main()
{
    int arr [6] = {5,6,2,3,52,55};

    printArray(arr, 6);

    return 0;
}
void printArray (int arr[], int sizeofarr){

    for (int i = 0; i < sizeofarr; i++){
        std :: cout << "\nThe array element is: " << arr[i] << std :: endl;
    }


}
