#include "../std_lib_facilities.h"

int main() 
{

    double sum = 0;
    double high_temp = -1000;   // initialize to impossibly low
    double low_temp = 1000;     // initialize to 'impossibly high'
    int no_of_temps = 0;

    for (double temp; cin>>temp;)
    {
        ++no_of_temps;
        sum += temp;
        if (temp > high_temp) high_temp = temp;
        if (temp < low_temp) low_temp = temp;
    }

    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    cout << "Average temperature: " << sum/no_of_temps << endl;

    return 0;
};

// - No input returns NaN for average temperature (divide by 0)
// - -128.6 degrees Fahrenheit is the lowest temperature ever recorded
// - 134 degrees Fahrenheit is the histest temperature ever recorded