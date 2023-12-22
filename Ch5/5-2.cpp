#include "../std_lib_facilities.h"

double ctok(double c)       // converts celcius to Kelvin
{
    // int k = c + 273.15;
    // return int

    double k = c + 237.15;  // Error 1: set k to be double, not it
    return k;               // Error 2: return variable k, not datatype 'int'
}

int main() 
{
    double c = 0;              // declare input variable
   
    // cin >> d;               // retrieve temperature to input variable
    // double k = ctok("c");   // convert temperature
    // Cout << k << '\n';      // print out temperature

    cin >> c;               // Error 3: cin >> 'c' which is predifined variable, 'd' is not defined
    double k = ctok(c);     // Error 4: pass variable c to function, not string 'c'
    cout << k << '\n';      // Error 5: typo for cout (remove captilization)
}
