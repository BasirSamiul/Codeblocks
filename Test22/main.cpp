//Creating a program that understand new keyword and delete keyword.
#include <iostream>

int main()
{
    int *pointer;
     pointer = new int;
     *pointer = 30;
     std :: cout << *pointer;

     delete pointer;
     std :: cout << *pointer;

    return 0;
}
