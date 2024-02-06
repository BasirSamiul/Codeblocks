//uri1011

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double PI = 3.14159;

    double R;

    cin >> R;

    double volume = ((4.0 / 3) * (PI) * (R * R * R));

    cout << fixed ;

    cout << setprecision(3);

    cout << "VOLUME = " << volume << endl;

    return 0;
}
