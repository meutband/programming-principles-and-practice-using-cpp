#include "../std_lib_facilities.h"

/*
Please enter your first name and age
mark 34.85
Hello, mark (age 418.2 months).
*/

int main() {
    cout << "Please enter your first name and age\n";
    string first_name;
    double age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age*12 << " months).\n";
    return 0;
};
