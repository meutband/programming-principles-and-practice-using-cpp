#include "../std_lib_facilities.h"

double ctof(double c)
{
    double f = c * 1.8 + 32;
    return f;
}

double ftoc(double f)
{
    double c = (f - 32) / 1.8;
    return c;
}


int main() 
{
    double val = 0;
    string unit = "";
    cin >> val >> unit;

    if (unit == "Celcius" || unit == "celcius" || unit == "C" || unit == "c") 
    {
        double f = ctof(val);
        cout << f << " deg Fahrenheit\n";
    } else if (unit == "Fahrenheit" || unit == "fahrenheit" || unit == "F" || unit == "f")
    {
        double c = ftoc(val);
        cout << c << " deg Celcius \n";
    } else {
        error("incorrect unit given, must be either Celcius or Fahrenheit");
    }
    
}
