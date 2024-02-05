//Demonstrating overloading parameter constructor.
#include <iostream>
#include <string>

using namespace std;

class Human {
private:
    int age;
    string name;

public:
    Human(){
        cout << "\nHello, I am the default constructor." << endl;
    }
    Human(int my_age, string my_name){
        age = my_age;
        name = my_name;

        cout << "\nCalling the constructor by passing value in main " << age << " and my name " << name << endl;
    }

};

int main()
{
    Human obj;
    Human(25, "Samiul Basir");
    return 0;
}
