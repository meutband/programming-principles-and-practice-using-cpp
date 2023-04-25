#include "../std_lib_facilities.h"

int square(int x) {

    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += x;
    };
    return sum;
};

int main() {

    // 1 - 100
    for (int i = 1; i<=100; ++i) {
        cout << i << " " << square(i) << endl;
    };

    return 0;
};
