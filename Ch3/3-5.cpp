#include "../std_lib_facilities.h"

int main() {

    double val1, val2;
    cout << "Please enter 2 float values: ";
    cin >> val1 >> val2;

    if(val1 < val2) {
        cout << val1 << " is less than " << val2 << '\n';
    } else if (val2 < val1) {
        cout << val1 << " is greater than " << val2 << '\n';
    };
    
    cout << val1 << " + " << val2 << " = " << val1+val2 << '\n';
    cout << val1 << " - " << val2 << " = " << val1-val2 << '\n';
    cout << val1 << " x " << val2 << " = " << val1*val2 << '\n';
    cout << val1 << " / " << val2 << " = " << val1/val2 << '\n';

    return 0;
};