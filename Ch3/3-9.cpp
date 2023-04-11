#include "../std_lib_facilities.h"

int main() {
    
    string val;
    cout << "Please spell out a number: ";
    cin >> val;

    if (val == "zero") {
        cout << 0 << '\n';
    } else if (val == "one") {
        cout << 1 << '\n';
    } else if (val == "two") {
        cout << 2 << '\n';
    } else if (val == "three") {
        cout << 3 << '\n';
    } else if (val == "four") {
        cout << 4 << '\n';
    } else {
        cout << "Not a number I know.\n";
    };
    
    return 0;
};