#include <iostream>
#include <string>

using namespace std;

class Buckyclass{
private:
    string name;
public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
};

int main()
{
     Buckyclass obj;
     obj.setName("Samiul Basir");
    cout << obj.getName();

    return 0;
}
