#include "../std_lib_facilities.h"

int main() {

    string name;
    int score;

    vector<string> names;
    vector<int> scores;

    cout << "Please enter a name and score. (Enter NoName 0 to end data entry) " << endl;
    while (cin >> name >> score) {

        if ((name == "NoName") && (score == 0)) {
            break;
        };

        for (string n : names) {
            if (n == name) {
                cout << "Error: duplicate name: " << n << endl;
                return 1;
            }
        };

        names.push_back(name);
        scores.push_back(score);
    };

    for (int i = 0; i < names.size(); ++i) {
        cout << "Name: " << names[i] << ", Score: " << scores[i] << endl;
    };

    return 0;
};