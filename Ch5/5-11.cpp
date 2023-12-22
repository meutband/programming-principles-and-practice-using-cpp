#include "../std_lib_facilities.h"

int main() 
{

    int total;
    cout << "Enter the number of integers of the Fibonacci's Sequence to be printed: ";
    cin >> total;

    if (total == 0) error("number is 0");
    if (total == 1) 
    {
        cout << "1 number: 1" << endl;
    }
    if (total == 2)
    {
        cout << "2 numbers: 1, 1" << endl;
    }

    cout << total << " numbers: 1, 1";

    int f1 = 1;
    int f2 = 1;
    for (int i = 3; i <= total; ++i) 
    {
        int f = f1 + f2;
        if (f < f2) error("exceded maximum integer value");
        f1 = f2;
        f2 = f;
        cout << ", " << f;
    }
    cout << endl;
    return 0;
}