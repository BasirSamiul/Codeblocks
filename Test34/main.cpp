//Creating a constructor and destroying the constructor.
#include <iostream>

using namespace std;

class Human{

public:

    Human(){
        cout << "Hello, I am the constructor." << endl;
    }

    ~Human(){
        cout << "Hey, I Destroyed the Default constructor." << endl;
    }

};

int main()
{
    Human *obj = new Human();

    delete obj;

    return 0;
}
