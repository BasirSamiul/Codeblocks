//Practice in head recursion.
#include <iostream>

void func(int);

using namespace std;

int main()
{
    func(3);

    return 0;
}
void func(int n){
    if( n > 0 ){

            func(n-1);
    cout << n << endl;
    }

}
