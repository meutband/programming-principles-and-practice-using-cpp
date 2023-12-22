#include "../std_lib_facilities.h"

vector<int> guess_vec() {

    while(true) {

        // get guess as int
        int guess;
        cin >> guess;

        // convert to string
        string guess_str = to_string(guess);

        vector<int> guess_vec;

        // leading zero is ignored, add it back
        if (guess < 1000) guess_vec.push_back(0);

        // loop through guess (as string), convert to vector
        for (int i = 0; i < guess_str.length(); i++) 
        {
            int con = guess_str[i] - '0';
            guess_vec.push_back(con);
        }

        // validate that the user guess contains no duplicate values. 
        bool good = true;
        for (int i = 0; i < guess_vec.size(); ++i)
        {
            for (int j = i+1; j < guess_vec.size(); ++j)
            {
                if (guess_vec[i] == guess_vec[j]) {
                    good = false;
                    break;
                }

            }
            if (!good) break;
        }

        if (!good) {
            cout << "Error, you entered a number with duplicate values... please try again. ";
        } else {
            return guess_vec;
        }
    }
}

bool compare(vector<int> guess, vector<int> actual) 
{

    int bulls = 0;
    int cows = 0;

    // loop through guess vector
    for (int i = 0; i < guess.size(); ++i)
    {
        // loop through actual vector
        for (int j = 0; j < actual.size(); ++j) 
        {
            // check values, if same and indexes are same, then add to bull. if same at different indexec, then cow.
            if (guess[i] == actual[j]) {
                if (i == j) {
                    bulls += 1;
                } else {
                    cows += 1;
                }
            }
        }
    }

    // if not all bulls, then print statement, otherwise return true
    if (bulls != guess.size()) 
    {
        for (int i = 0; i < guess.size(); ++i) cout << guess[i];
        cout << " -> Sorry incorrect, there are " << bulls << " bulls and " << cows << " cows. Please try again. ";
        return false;
    }

    return true;
}

int main()
{

    vector<int> actual = {0,5,2,3};

    cout << "Welcome the Bulls and Cows!!\n\nTo play the game, you must guess a 4 digit number where each digit is a non-repeating number (not 1213, 1 repeats). As you guess the number, you will to told the number of Bulls (number of correct digits, both number of place) and Cows (number is correct but not placement). If you guess the correct number, you will the game!!\n\nPlease enter a 4 digit number to start. ";

    // continuously get guess, and check against actual. stop loop when done
    bool correct = false;
    int counts = 0;
    while (!correct)
    {
        ++counts;
        vector<int> guess = guess_vec();
        correct = compare(guess, actual);
    }

    cout << "CONGRATS!!! YOU WIN!!! " << counts << " guesses." << endl;
    return 0;
}