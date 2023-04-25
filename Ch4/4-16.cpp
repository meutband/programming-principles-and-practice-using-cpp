#include "../std_lib_facilities.h"

int main() {

    vector<int> numbers;
    int val;
    cout << "Please enter a series of numbers (enter '|' to end series): ";
    while (cin >> val) {
        numbers.push_back(val);
    };

    cout << endl;
    sort(numbers);

    int max_val = 0;
    int max_count = 0;
    int curr_val = 0;
    int curr_count = 0;
    
    for (int num : numbers) {
        
        if (num == max_val) {
            ++max_count;
        };
        
        if (num == curr_val) {
            ++curr_count;
        } else {
            curr_val = num;
            curr_count = 1;
        };

        if (curr_count > max_count) {
            max_count = curr_count;
            max_val = curr_val;
        };
    };

    cout << "Mode " << max_val << " occured " << max_count << " times." << endl;
    return 0;
};