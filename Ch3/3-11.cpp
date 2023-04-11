#include "../std_lib_facilities.h"

int main() {

    int pennies, nickels, dimes, quarters, half, dollar;
    cout << "How many pennies do you have: ";
    cin >> pennies;
    cout << "How many nickels do you have: ";
    cin >> nickels;
    cout << "How many dimes do you have: ";
    cin >> dimes;
    cout << "How many quarters do you have: ";
    cin >> quarters;
    cout << "How many half-dollars do you have: ";
    cin >> half;
    cout << "How many one-dollar coins do you have: ";
    cin >> dollar;

    if (pennies != 0) {
        cout << "You have " << pennies << " penn";
        if (pennies == 1) {
            cout << "y.\n";
        } else {
            cout << "ies.\n";
        };
    };

    if (nickels != 0) {
        cout << "You have " << nickels << " nickel";
        if (nickels == 1) {
            cout << ".\n";
        } else {
            cout << "s.\n";
        };
    };

    if (dimes != 0) {
        cout << "You have " << dimes << " dime";
        if (dimes == 1) {
            cout << ".\n";
        } else {
            cout << "s.\n";
        };
    };

    if (quarters != 0) {
        cout << "You have " << quarters << " quarter";
        if (quarters == 1) {
            cout << ".\n";
        } else {
            cout << "s.\n";
        };
    };

    if (half != 0) {
        cout << "You have " << half << " half dollar";
        if (half == 1) {
            cout << ".\n";
        } else {
            cout << "s.\n";
        };
    };

    if (dollar != 0) {
        cout << "You have " << dollar << " one dollar coin";
        if (dollar == 1) {
            cout << ".\n";
        } else {
            cout << "s.\n";
        };
    };

    int total;
    total = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half * 50 + dollar * 100;

    int whole, coins;
    whole = total / 100;
    coins = total % 100;

    cout << "The value of all your coins is $" << whole << "." << coins << ".\n";
    return 0;
};