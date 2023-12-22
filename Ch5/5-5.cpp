#include "../std_lib_facilities.h"

double ctok(double c)
{
    if (c < -273.15) error("temperature below -273.15 degress Celcius.");
    double k = c + 237.15;
    return k;
}

double ktoc(double k)
{
    if (k < 0) error("temperature below 0 degress Kelvin.");
    double c = k - 237.15;
    return c;
}


int main() 
{
    double val = 0;
    string unit = "";
    cin >> val >> unit;

    if (unit == "Celcius" || unit == "celcius") 
    {
        double k = ctok(val);
        cout << k << " deg Kelvin\n";
    } else if (unit == "Kelvin" || unit == "kelvin")
    {
        double c = ktoc(val);
        cout << c << " deg Celcius\n";
    } else {
        error("incorrect unit given, must be either Celcius or Kelvin");
    }
    
}
