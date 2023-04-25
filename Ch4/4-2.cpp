#include "../std_lib_facilities.h"

int main() {
    
    cout << "Please enter a series of temperatures, followed by '|': ";
    vector<double> temps;
    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    };

    double med;
    sort(temps);

    if(temps.size() % 2 == 1) {
        med = temps[temps.size()/2]; 
    } else {
        double med1 = temps[(temps.size()/2) - 1];
        double med2 = temps[temps.size()/2];
        med = (med1 + med2) / 2;
    };

    cout << "Median Temp is " << med << endl;

    return 0;
};