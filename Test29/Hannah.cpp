#include "Hannah.h"
#include <iostream>

Hannah::Hannah(int num)
: n(num)
{

}
void Hannah :: show(){
    std :: cout << n <<  std :: endl
    << "thsi->n" << ": " << this -> n << std :: endl
    << "(*this).n" << ": " << (*this).n << std :: endl;

}

