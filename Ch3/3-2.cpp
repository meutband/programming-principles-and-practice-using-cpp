#include "../std_lib_facilities.h"

int main() {
    double miles;
    cout << "Please enter the number of miles: ";
    cin >> miles;
    cout << miles << " miles to " << miles * 1.609 << " kilometers\n";
    return 0;
};