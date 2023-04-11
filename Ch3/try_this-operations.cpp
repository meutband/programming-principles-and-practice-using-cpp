#include "../std_lib_facilities.h"

/*
Please enter a floating-point value: 45
n == 45
n+1 == 46
three times n == 135
twice n == 90
n squared == 2025
half of n == 22
square root of n == 6.7082
modulo 10 of n == 5
*/

int main() {
    cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << "\nmodulo 10 of n == " << n%10
        << '\n';
};