//Demonstrating destructor to release resource.
#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }
    void display(){

        cout << *name << "Age: " << *age << endl;

    }
    ~Human(){
        delete name;
        delete age;
        cout << "Deleted Successfully." << endl;
    }
};

int main()
{
    Human *obj = new Human("Samiul", 25);
    obj -> display();

    return 0;
}
