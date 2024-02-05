#include "Sally.h"
#include <iostream>

Sally::Sally(int a, int b) : regvar(a), c_var(b)
{

}
void Sally ::  print(){
    std :: cout << "\nThe regular variable is: " << regvar << "\nThe constant variable is: " << c_var << std :: endl;
}
