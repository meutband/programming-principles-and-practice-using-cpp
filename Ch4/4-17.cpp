#include "../std_lib_facilities.h"

int main() {

    vector<string> values;
    string v;
    string min = "ZZZZZZZZZZZZZZ";
    string max = "0";
    cout << "Please enter a series of values (enter '|' to end series): ";
    while (cin >> v) {
        
        if (v == "|") {
            break;
        };

        if (v < min) {
            min = v;
        };

        if (v > max) {
            max = v;
        };

        values.push_back(v);
    };

    cout << endl;
    sort(values);

    string max_val = "";
    int max_count = 0;
    string curr_val = "";
    int curr_count = 0;
    
    for (string val : values) {
        
        if (val == max_val) {
            ++max_count;
        };
        
        if (val == curr_val) {
            ++curr_count;
        } else {
            curr_val = val;
            curr_count = 1;
        };

        if (curr_count > max_count) {
            max_count = curr_count;
            max_val = curr_val;
        };
    };

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Mode: '" << max_val << "' occured " << max_count << " times." << endl;
    
    return 0;
};