#include "../std_lib_facilities.h"

int main() {

    vector<int> primes = {};
    vector<int> multiples = {};

    int max;
    cout << "Enter a max number? ";
    cin >> max;

        for (int i = 1; i <= max; ++i ) {
        
        if (i == 1) { // 1 is not prime
            continue;
        };

        bool mult = false;
        for (int mul: multiples) {
            if (mul == i) {
                mult = true;
                continue;
            };
        };

        if (mult) {
            continue;
        };

        for (int j = 1; i*j <= max; ++j) {
            if (j == 1) {
                primes.push_back(i); //value is the prime
                continue;
            };

            // loop through multiples to prevent repeat multiples. ie 10 for 2*5 and 5*2
            bool mult = false;
            for (int mul: multiples) {
                if (mul == i*j) {
                    mult = true;
                    continue;
                };
            };

            if (!mult) {
                multiples.push_back(i*j);
                continue;
            };
            
        };
        

    };

    cout << "Primes between 1 and " << max << ":" << endl;
    for (int prime: primes) {
        cout << prime << endl;
    };
 
    return 0;
};