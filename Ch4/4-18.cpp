#include "../std_lib_facilities.h"

int main() {

    double a,b,c;
    cout << "This program solves ax^2 + bx + c = 0, please enter the values for a, b, and c. ";
    cin >> a >> b >> c;

    //       - b +/- sqrt( b^2 - 4*a*c )
    //  x = ------------------------------
    //                 2*a

    // b^2 - 4ac
    cout << "a " << a << " b " << b << " c " << c << endl;
    double val = ( b * b ) - ( 4 * a * c );

    if (val < 0) {

        cout << "       " << (-1 * b) << " + " << sqrt(-1 * val) << "i \n" 
             << " x = " << "-----------------\n" 
             << "            " << ( 2 * a ) << endl; 

        cout << "\nAND\n";

        cout << "       " << (-1 * b) << " - " << sqrt(-1 * val) << "i \n" 
             << " x = " << "-----------------\n" 
             << "            " << ( 2 * a ) << endl; 

        return 0;

    };

    cout << "val: " << val << endl;

    double p, m;
    p = ( -1 * b ) + sqrt(val);
    m = ( -1 * b ) - sqrt(val);

    cout << "x = " << ( p / (2 * a) ) << " AND " << ( m / (2 * a)) << endl;

    return 0;
};