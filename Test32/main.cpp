//Demonstrating private access modifeir
#include <iostream>

using namespace std;

class Human{

private:
    int age;

public:
    void setAge(int value){
        age = value;
    }

    int getAge(){
        return age;

    }
    void display(){
        cout << "My age is: " << age << endl;
    }


};

int main()
{
    Human obj;

    obj.setAge(25);

    obj.display();

    return 0;
}
