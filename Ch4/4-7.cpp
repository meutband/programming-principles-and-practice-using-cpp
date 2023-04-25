#include "../std_lib_facilities.h"

int getInt(string input) {

    vector<string> numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for (int i = 0; i < numbers.size(); ++i) {
        if (input == numbers[i]) {
            return i;
        };
    };

    int val;

    switch (input[0]) {
    case '0':
        val = 0;
        break;
    case '1':
        val = 1;
        break;
    case '2':
        val = 2;
        break;
    case '3':
        val = 3;
        break;
    case '4':
        val = 4;
        break;
    case '5':
        val = 5;
        break;
    case '6':
        val = 6;
        break;
    case '7':
        val = 7;
        break;
    case '8':
        val = 8;
        break;
    case '9':
        val = 9;
        break;
    };

    return val;

};

int main() {

    string input1, input2;
    char oper;
    cout << "Please enter 2 numbers followed by an operation (+,-,*,/): ";
    cin >> input1 >> input2 >> oper;

    int val1 = getInt(input1);
    int val2 = getInt(input2);

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
