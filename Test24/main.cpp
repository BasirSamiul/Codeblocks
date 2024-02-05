//Creating a class and it access in main function.
#include <iostream>

class Myclass{
public:
    void show(){
        std :: cout << "Hey, I am your first class.";
    }
};

int main()
{
    Myclass obj;
    obj.show();

    return 0;
}
