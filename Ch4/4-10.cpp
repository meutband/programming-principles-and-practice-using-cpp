#include "../std_lib_facilities.h"

// computer is rock
string rock(string user) {
    switch (user[0]) {
    case 'p':
        return "win";
    case 's':
        return "lose";
    default:
        return "tie";
    };
};

// computer is paper
string paper(string user) {
    switch (user[0]) {
    case 'r':
        return "lose";
    case 's':
        return "win";
    default:
        return "tie";
    };
};

// computer is scissors
string scissors(string user) {
    switch (user[0]) {
    case 'p':
        return "lose";
    case 'r':
        return "win";
    default:
        return "tie";
    };
};

string playgame(string comp, string user) {
    string result;
    switch (comp[0]) {
    case 'r':
        result = rock(user);
        break;
    case 'p':
        result = paper(user);
        break;
    case 's':
        result = scissors(user);
        break;
    };
    return result;
};

int main() {

    vector<string> comp_results = {"rock","scissors","paper","scissors","rock",
        "rock","paper","rock","scissors", "paper"};

    for (string comp : comp_results) {

        cout << "rock, paper, scissors: ";
        string user;
        cin >> user;

        cout << "Computer: " << comp << ", User: " << user << " you " << playgame(comp, user) << endl;
    };

    return 0;
};
