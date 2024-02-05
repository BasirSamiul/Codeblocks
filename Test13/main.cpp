#include <iostream>

using namespace std;

void func(int x){
    if (x == 0){
        return;
    }
    else{
        cout << "Geeks ";
        func(x - 1);
    }
}

int main()
{
    int x;
    cout << "Enter the number how much time, you want to print Geeks: " << endl;
    cin >> x;
    func(x);

    return 0;
}
