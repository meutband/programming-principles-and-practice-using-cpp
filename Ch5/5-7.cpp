#include "../std_lib_facilities.h"

double root(double a, double b, double c) 
{
    double val = b*b - 4*a*c;
    if (val < 0) error("b^2 - 4ac < 0, non real roots exists.");
    return sqrt(val);
}

int main() 
{

    double a, b, c;
    cout << "Please enter a, b, and c: ";
    cin >> a >> b >> c;

    cout << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;
    double rt = root(a, b, c);

    double x1, x2;
    x1 = (-1 * b + rt) / (2 * a);
    x2 = (-1 * b - rt) / (2 * a);

    cout << "x = " << x1 << " and " << x2 << endl;

    return 0;
}