//passing variable location to pointer using function.
#include <iostream>

void show(int *ptr);

int main()
{
    int mynum = 30;
    show(&mynum);
    std :: cout <<  "\nAfter execution successful!!!!\n";
    show(&mynum);

    return 0;
}
void show(int *ptr){
    std :: cout << "\nHello this is your number: "  << *ptr << std :: endl;
    *ptr = 100;
}
