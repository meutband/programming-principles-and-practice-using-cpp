#include "../std_lib_facilities.h"

int main() {

    for (int i = 0; i<26; ++i) {
        char c = 'a' + i;
        cout << c << " " << int(c) << endl;
    };

    return 0;
};