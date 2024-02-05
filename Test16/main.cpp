//Demonstrating the program that understanding pointers.
#include <iostream>

int main()
{
    //initializing variable
    int age = 18;
    bool human = true;

    //creating pointer for storing variable
    int *agehunter;
    bool *humanhunter;


    agehunter = &age;
    humanhunter = &human;

    std :: cout << age << " --> " << agehunter <<  " --> " << &age << std :: endl;
    std :: cout << human << " --> " << humanhunter << std :: endl;

    if (agehunter == &age){
        std :: cout << "\nYes! They are the same location" << std :: endl;
    }
    else
    {
        std :: cout << "Holy!!! Fuck. " << std :: endl;
    }

    std :: cout << age << " --> " << *agehunter << std :: endl;
    std :: cout << human << " --> " << *humanhunter << std :: endl;
    std :: cout << "\nThanks to run the program!!!\n";


    return 0;
}
