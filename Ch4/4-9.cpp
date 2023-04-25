#include "../std_lib_facilities.h"

double powerofTWO(int power) {
    if (power == 0) {
        return 1;
    };

    double total = 1;
    for (int i = 1; i <= power; ++i) {
        total *= 2;
    };

    return total;
};

int main() {

    double total = 0;
    for (int squares = 1; squares <= 64; ++squares) {

        double grains = powerofTWO(squares-1); // 1 square = 1 grain = 2^0 = 2^(1-1)
        total += grains;
        
        cout << squares << " squares will cost " << grains << " grains for a total of "
                << total << endl;
    };

    return 0;
};

// last answers with int data type
// 31 squares will cost 1073741824 grains for a total of 2147483647

// with double
// 64 squares will cost 9.22337e+18 grains for a total of 1.84467e+19
