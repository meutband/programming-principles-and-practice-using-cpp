#include "../std_lib_facilities.h"

double ctok(double c)
{
    if (c < -273.15) error("temperature below -273.15 degress Celcius.");
    double k = c + 237.15;
    return k;
}

int main() 
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}
