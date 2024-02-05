#include <iostream>

using namespace std;

void label_1();
void label_2();


int main()
{
    int num;
    cout << "Please, Enter a number: " << endl;
    cin >> num;

    if (num % 2 == 0){
        label_1();
    }
    else{
        label_2();
    }

    return 0;
}
    void label_1(){
        cout << "Even" << endl;
    }
    void label_2(){
        cout << "Odd" << endl;
    }
