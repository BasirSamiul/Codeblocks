//Demonstrating protected access modifiers.

#include <iostream>
#include <string>

using namespace std;

class Person{

protected:
    string name;

public:
    void setname(string iname){
        name = iname;
    }

};

class Student : public Person{
public:

    void display(){
        cout << "My name is: " << name << endl;
    }

};

int main()
{
    Student obj;
    obj.setname("Samiul Basir");
    obj.display();

    return 0;
}
