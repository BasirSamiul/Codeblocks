//Creating a class this is access to be pointer.
#include <iostream>
#include "Sally.h"

void func ();

int main()
{
    func();


    return 0;
}
void func()
{
    for (int i = 0; i < 3; i++){

    Sally obj;

    //Sally *ptr = &obj;

    obj.show();

   // ptr -> show();

    if (i == 3){
        func();
    break;

    }

    }
}
