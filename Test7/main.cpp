#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int side_a, side_b, side_c;

    cout << "Please enter the first side of A: ";
    cin >> side_a;

    cout << "Please enter the first side of B: ";
    cin >> side_b;

    side_a = pow (side_a, 2);
    side_b =  pow (side_b, 2);

    side_c = sqrt (side_a + side_b);

    cout << "\nHey finally, getting the output is: " << side_c << endl;

    return 0;
}
