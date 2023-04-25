#include "../std_lib_facilities.h"

int main() {

    double val1, val2;
    char oper;
    cout << "Please enter 2 numbers followed by an operation (+,-,*,/): ";
    cin >> val1 >> val2 >> oper;

    switch (oper) {
    case '+':
        cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << endl;
        break;
    case '-':
        cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2 << endl;
        break;
    case '*':
        cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << endl;
        break;
    case '/':
        cout << "The quotient of " << val1 << " and " << val2 << " is " << val1 / val2 << endl;
        break;
    };

    return 0;
};