#include "../std_lib_facilities.h"

bool isPrime(vector<int> primes, int val) {

    for (int prime: primes) {
        if ((val % prime) == 0 ) {
            return false;
        };
    };  

    return true;
}

int main() {

    vector<int> primes = {};

    for (int i = 1; i < 101; ++i ) {
        
        if (i == 1) { // 1 is not prime
            continue;
        };

        bool prime = isPrime(primes, i);
        
        if (prime) {
            primes.push_back(i);
        };

    };

    cout << "Primes between 1 and 100:" << endl;
    for (int prime: primes) {
        cout << prime << endl;
    };
 
    return 0;
};