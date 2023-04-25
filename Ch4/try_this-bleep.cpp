#include "../std_lib_facilities.h"

int main() {

    vector<string> dislikes = {"guacamole", "sour_cream", "jalapenos", "cauliflower"};

    cout << "Enter names of food (all lowercase, for multiple words use '_'): ";
    string food;
    while(cin >> food) {
        bool disliked = false;
        for (string dis: dislikes) {
            if (food == dis) {
                cout << "BLEEP" << endl;
                disliked = true;
            };
        };
        if (!disliked) {
            cout << food << endl;
        };
    };
    return 0;
};