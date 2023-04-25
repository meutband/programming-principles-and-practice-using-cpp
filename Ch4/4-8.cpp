#include "../std_lib_facilities.h"

int powerofTWO(int power) {
    if (power == 0) {
        return 1;
    };

    int total = 1;
    for (int i = 1; i <= power; ++i) {
        total *= 2;
    };

    return total;
};

int main() {

    int total = 0;
    vector<int> totals = {1000, 1000000, 1000000000};

    int squares = 1;

    for (int t: totals) {

        bool less = false;
        while(!less) {

            int grains = powerofTWO(squares-1); // 1 square = 1 grain = 2^0 = 2^(1-1)
            total += grains;

            if (total >= t) {
                cout << squares << " squares will cost " << grains << " grains for a total of "
                     << total << endl;
                less = true;
            };
            ++squares;
        };
    };

    return 0;
};
