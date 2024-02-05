#include <iostream>

struct student{
    int id;
    char sex;
};

int main()
{
    student samiul = {12558, 'M'};
    student *ptr;
    ptr = &samiul;

    std :: cout << "The id is: " << ptr -> id << "\nSex is: " << ptr -> sex << std :: endl;

    return 0;
}
