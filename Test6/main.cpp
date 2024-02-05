#include <iostream>

using namespace std;

int main()
{

    string name;
    cout << "Please, enter your full name: ";
    getline(cin >> ws, name);
    cout << "Hello your full name is " << name << endl;


    return 0;
}
