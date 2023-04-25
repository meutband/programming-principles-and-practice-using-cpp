#include "../std_lib_facilities.h"

int main() {

    int i = 0;

    while(i<26) {
        char c = 'a' + i;
        cout << c << " " << int(c) << endl;
        ++i;
    };

    return 0;
};