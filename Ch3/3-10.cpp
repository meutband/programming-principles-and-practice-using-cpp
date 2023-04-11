#include "../std_lib_facilities.h"

int main() {
    
    string operation;
    double op1, op2;

    cout << "Please enter an operand (+,-,*,/,) followed by 2 numbers: ";
    cin >> operation >> op1 >> op2;

    if (operation == "+" | operation == "plus") {
        cout << op1 << " + " << op2 << " = " << op1+op2 << '\n';
    } else if (operation == "-" | operation == "minus") {
        cout << op1 << " - " << op2 << " = " << op1-op2 << '\n';
    } else if (operation == "*" | operation == "mul") {
        cout << op1 << " * " << op2 << " = " << op1*op2 << '\n';
    } else if (operation == "+" | operation == "div") {
        cout << op1 << " / " << op2 << " = " << op1/op2 << '\n';
    };

    return 0;
};