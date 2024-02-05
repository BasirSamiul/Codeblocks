#include <iostream>

using namespace std;

class Demo{
public:
    void coolSay()
    {
        cout << "Hello, I am a Class." << endl;
    }

};


int main()
{
    Demo obj;
    obj.coolSay();
    return 0;
}
