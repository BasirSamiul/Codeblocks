//URI 1012

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double PI = 3.14159;

    double baseA, baseB, heightC;

    cin >> baseA >> baseB >> heightC;

    double areaTriangle = ((0.500) * (baseA) * (heightC));

    double areaCircle = ((PI) * (heightC * heightC));

    double areaTrapezium = (((baseA + baseB) / 2) * heightC);

    double areaSquare = (baseB * baseB);

    double areaRectangle = (baseA * baseB);

    cout << fixed ;

    cout << setprecision(3);

    cout << "TRIANGULO: " << areaTriangle << endl;

    cout << "CIRCULO: " << areaCircle << endl;

    cout << "TRAPEZIO: " << areaTrapezium << endl;

    cout << "QUADRADO: " << areaSquare << endl;

    cout << "RETANGULO: " << areaRectangle << endl;

    return 0;
}
