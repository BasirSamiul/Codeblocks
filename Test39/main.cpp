#include <iostream>
#include <iomanip>

using namespace std;
//Uri 1010 problem solved

int main()
{
    int num1, num2, num3, num4;

    float num5, num6;

    cin >> num1 >> num2 >> num5;

    cin >> num3 >> num4 >> num6;

    float result = ((num2 * num5) + (num4 * num6));

    cout<<fixed;

    cout << setprecision(2) << "VALOR A PAGAR: " << "R$ " << result << endl;;

    return 0;
}
