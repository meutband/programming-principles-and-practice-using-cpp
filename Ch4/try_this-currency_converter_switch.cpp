#include "../std_lib_facilities.h"

constexpr double yen_to_dollar = .0075; //133.83 -> 1
constexpr double kroner_to_dollar = 0.096; //10.37 -> 1
constexpr double pound_to_dollar = 1.24;  //.80 -> 1

int main() {

    double amount;
    char unit;

    cout << "Please enter an amount of money followed by a unit.\n"
         << "(y for yen, k for kroner, or p for pound): ";
    cin >> amount >> unit;

    switch (unit) {
    case 'y':
        cout << amount << " yen = " << amount * yen_to_dollar << " dollars\n";
    case 'k':
        cout << amount << " kroner = " << amount * kroner_to_dollar << " dollars\n";
    case 'p':
        cout << amount << " pounds = " << amount * pound_to_dollar << " dollars\n";
    default:
        cout << "Sorry, I dont know a unit called '" << unit << "'.\n";
    };

    return 0;
};