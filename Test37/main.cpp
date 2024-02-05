//Demonstrating inheritance.
#include <iostream>
#include <string>

using namespace std;

class Person{

public:

    string name;
    int age;

    void setname(string iname){
        name = iname;
    }

    void setage(int iage){
        age = iage;
    }

};

class Student : public Person{

int id;

public:
    void setid(int iid){
        id = iid;
    }
    void display(){
       cout << "My name is: " << name << endl << "My age is: " << age << endl << "My id is: " << id << endl;

    }

};


int main()
{
    Student obj;

    obj.setname("Samiul Basir.");

    obj.setage(26);

    obj.setid(1821112042);

    obj.display();

    return 0;
}
