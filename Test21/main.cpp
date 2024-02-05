//Demonstrating union.
#include <iostream>

union emp{
    int id;
    float salary;
};

int main()
{
    emp samiul;
    samiul.id = 15;

    std:: cout << samiul.id << std :: endl;

    //std:: cout << samiul.salary << std :: endl;


    return 0;
}
