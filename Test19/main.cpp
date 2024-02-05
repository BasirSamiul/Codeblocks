//Demonstrating struct
#include <iostream>

struct student{
    int id;
    char sex;
};

int main()
{
    student samiul, sukhi;

    samiul.id = 1821112042;
    samiul.sex = 'M';

    sukhi.id = 0000000;
    sukhi.sex = 'F';

    std :: cout << samiul.id << " " << samiul.sex;


    return 0;
}
