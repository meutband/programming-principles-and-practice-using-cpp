#include "../std_lib_facilities.h"

int main() {

    vector<string> numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    string input;    
    while(cin >> input) {

        bool word = false;
        for (int i = 0; i < numbers.size(); ++i) {
            if (input == numbers[i]) {
                cout << input << " " << i << endl;
                word = true;
            }
        };

        if (!word) {

            if (input.size() > 1) {
                cout << "invalid input, must be between 0 - 9 or zero - nine!" << endl;
                continue;
            };

            switch (input[0]) {
            case '0':
                cout << 0 << " " << numbers[0] << endl;
                break;
            case '1':
                cout << 1 << " " << numbers[1] << endl;
                break;
            case '2':
                cout << 2 << " " << numbers[2] << endl;
                break;
            case '3':
                cout << 3 << " " << numbers[3] << endl;
                break;
            case '4':
                cout << 4 << " " << numbers[4] << endl;
                break;
            case '5':
                cout << 5 << " " << numbers[5] << endl;
                break;
            case '6':
                cout << 6 << " " << numbers[6] << endl;
                break;
            case '7':
                cout << 7 << " " << numbers[7] << endl;
                break;
            case '8':
                cout << 8 << " " << numbers[8] << endl;
                break;
            case '9':
                cout << 9 << " " << numbers[9] << endl;
                break;
            };

        };

    };

    return 0;
};
