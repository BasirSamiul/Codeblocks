//Demonstrating Friend Function.
#include <iostream>
#include <string>

using namespace std;

class Human{

    string name;
    int age;
public:
    Human(string iname, int iage){

        name = iname;
        age = iage;

    }

    void tellme(){
        cout << "Hello I am the constructor element => " << name << endl << age << endl;
    }
    friend void display(Human man);
};

    void display(Human man){
    cout << "Hello I am the friend function element => " << man.name << endl << man.age << endl;
}

int main()
{
    Human obj ("Samiul", 26);

    display(obj);

    return 0;
}
