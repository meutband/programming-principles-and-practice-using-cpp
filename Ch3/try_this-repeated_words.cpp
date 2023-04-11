#include "../std_lib_facilities.h"

/* 
Sentence: She she laughed He He He because what he did did not look very very good good

Output:
repeated word: He
repeated word: He
repeated word: did
repeated word: very
repeated word: good

A word is series a characters bewteen spaces. A repeated word are words that contain the same characters.
i.e. 'S' != 's'
*/

int main() {
    string previous = " ";
    string current;
    while(cin>>current) {
        if(previous == current) {
            cout << "repeated word: " << current << '\n';
        }
        previous = current;
    }
};

