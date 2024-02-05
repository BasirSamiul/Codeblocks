//Dynamic memory allocating using array and pointer!
#include <iostream>

int main()
{
    //creating a pointer which defined by null.
    int *pointer = NULL;

    //initiating a variable that store how many items are stored.
    int input;

    std :: cout << "How many items you want to enter: ";
    std :: cin  >> input;

    //Finally creating a Dynamic array with accessing pointer.
    pointer = new int [input];

    //Creating a temporary variable which is stored temporary value.
    int temp;

    //Creating a loop to initiating value...
    for(int i = 0; i < input; i++){
        std :: cout << "\nEnter the items--> " << i + 1 << " : ";
        std :: cin >> temp;
        *(pointer + i) = temp;
    }
    //Creating another loop which is print the all value!
    for(int i = 0; i < input; i++){
        std :: cout <<"\n" << i + 1 << " item is: " << *(pointer + i) << std :: endl;
    }
    std :: cout << "\nThanks for run the program!!!" << std :: endl;

    return 0;
}
