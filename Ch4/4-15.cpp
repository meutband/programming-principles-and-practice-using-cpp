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
    int number;
    cout << "Pleaser enter a number of primes: ";
    cin >> number;

    int i = 1;
    while (primes.size() < number) {
        
        if (i == 1) { // 1 is not prime
            ++i;
            continue;
        };

        bool prime = isPrime(primes, i);
        
        if (prime) {
            primes.push_back(i);
        };
        ++i;

    };

    cout << "The first " << number << " primes:" << endl;
    for (int prime: primes) {
        cout << prime << endl;
    };
 
    return 0;
};