#include "../std_lib_facilities.h"

constexpr double cm_to_meters = 0.01;
constexpr double in_to_cm = 2.54;
constexpr double ft_to_in = 12;
vector<string> valid_units = {"m","ft","cm","in"};

int main() {

    // Pt 1 - 3
    // int val1, val2;
    // cout << "Please enter 2 integer values: ";
    // while(cin >> val1 >> val2) { 
    //     // cout << "Value 1: " << val1 << ", Value 2: " << val2 << endl;
    //     if (val1 < val2) {
    //         cout << "The smaller value is " << val1 << ", the larger value is " << val2 << endl;
    //     } else if (val1 > val2) {
    //         cout << "The smaller value is " << val2 << ", the larger value is " << val1 << endl;
    //     } else {
    //         cout << "The values are equal.\n";
    //     };
    //     cout << "Please enter 2 integer values: ";
    // };

    // Pt 4 - 5
    // double val1, val2;
    // cout << "Please enter 2  values: ";
    // while(cin >> val1 >> val2) { 
    //     if (val1 < val2) {
    //         cout << "The smaller value is " << val1 << ", the larger value is " << val2 << endl;
    //         if (val2 - val1 < .01) { cout << "The numbers are almost equal.\n"; }; 
    //     } else if (val1 > val2) {
    //         cout << "The smaller value is " << val2 << ", the larger value is " << val1 << endl;
    //         if (val1 - val2 < .01) { cout << "The numbers are almost equal.\n"; };
    //     } else {
    //         cout << "The values are equal.\n"; 
    //     };
    //     cout << "Please enter 2 values: ";
    // };

    // Pt 6
    // double small = 1000000000000;
    // double large = 0;
    // double val;
    // cout << "Please enter a number: ";
    // while (cin >> val) {
    //     if (val < small) {
    //         cout << val << " - the smallest so far\n";
    //         small = val;
    //     };
    //     if (val > large) {
    //         cout << val << " - the largest so far\n";
    //         large = val;
    //     };
    //     cout << "Please enter a number: ";
    // };
    
    // Pt 7-11
    double val;
    double sum = 0;
    double small = 10000000000000;
    double large = 0;
    vector<double> values;
    vector<double> sorted;
    string unit;

    cout << "Please enter a number and a unit (in, ft, cm, m): ";
    while(cin >> val >> unit) {
        
        bool valid_unit = false;
        for (string u: valid_units) {
            if (u == unit) {
                valid_unit = true;
            };
        };

        if (!valid_unit) {
            cout << "Invalid unit entered, please try again.\n";
        } else {
            
            cout << "Value entered: " << val << unit;

            // Part 8
            if (unit == "ft") {
                val = val * ft_to_in * in_to_cm * cm_to_meters;
                cout << " --> " << val << " meters\n";
            } else if (unit == "in") {
                val = val * in_to_cm * cm_to_meters;
                cout << " --> " << val << " meters\n";
            } else if (unit == "cm") {
                val = val * cm_to_meters;
                cout << " --> " << val << " meters\n";
            } else {
                cout << endl;
            };

            // Part 9
            if (val < small) {
                small = val;
            };
            if (val > large) {
                large = val;
            };

            sum += val;
            values.push_back(val);
            sorted.push_back(val);

            cout << "Smallest Value: " << small << " meters\n";
            cout << "Largest Value: " << large << " meters\n";
            cout << "Sum: " << sum << " meters\n";

            // Part 10
            cout << "Original Vector: ";
            for (double v: values) {
                cout << v << ", ";
            };
            cout << endl;

            // Part 11
            sort(sorted);
            cout << "Sorted Vector: ";
            for (double v: sorted) {
                cout << v << ", ";
            };
            cout << endl;
        };

        cout << "Please enter a number and a unit (in, ft, cm, m): ";
    };
};