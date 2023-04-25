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

    cout << "Please enter a score to match to a name: ";
    cin >> score;

    for (int i = 0; i < scores.size(); ++i) {
        if (score == scores[i]) {
            cout << names[i] << "'s score is " << score << endl;
            return 0;
        };
    };

    cout << "score not found" << endl;

    return 0;
};