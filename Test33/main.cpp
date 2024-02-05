//Demonstrating a constructor.
#include <iostream>
#include <string>

using namespace std;

class Human{

private:

    int age;
    string name;

public:

    Human(){
        name = "Samiul Basir";
        age = 25;
        cout << "Hello, I am the default constructor." << endl;
    }

    void display_Info(){

        cout << "\nMy name is: " << name << " and my age is: " << age << endl;
    }


};

int main()
{
    Human obj;
    obj.display_Info();

    return 0;
}
