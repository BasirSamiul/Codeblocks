#include <iostream>

using namespace std;

int main()
{
    int x_pos = 0, y_pos = 0;

    char c;
    cout << "Please, enter your move: ";
    cin >> c;

    switch(c){

        case 'L':
        cout << (x_pos--);
        break;
        case 'R':
        y_pos++;
        cout << (y_pos);
         break;
        case 'D':
        cout << (y_pos--);
         break;
        case 'U':
        cout << (x_pos++);
         break;
        default: cout << "Have an error.";

    }

    return 0;
}
