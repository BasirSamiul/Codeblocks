#include <iostream>
#include <string>

using namespace std;

class Myclass{
private:
    string name;
public:
    Myclass(string z){
        setName(z);
    }
    void setName (string x){
        name = x;
    }
    string getName(){
        return name;
    }
};

int main()
{
    Myclass obj ("Samiul");
    cout << "My name is: " + obj.getName();

    return 0;
}
