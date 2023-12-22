#include "../std_lib_facilities.h"

int main() 
{

    int total;
    cout << "Please enter the number of values you want to sum: ";
    cin >> total;

    cout << "Please enter some integers: ";

    vector<int> values;
    int val;

    while (cin >> val) 
    {
        values.push_back(val);
    }

    if (values.size() == 0) error("entered 0 numbers to total.");
    if (total > values.size()) error("not enough numbers to find sum.");

    cout << "The sum of the first " << total << " numbers ( ";
    int sum = 0;
    int prev = 0;
    for (int i = 0; i < total; ++i) {
        sum += values[i];
        if (values[i] > 0 && prev > sum) error("integer positive overflow, cannot be added");
        if (values[i] < 0 && prev < sum) error("integer negative overflow, cannot be added");
        prev = sum;
        cout << values[i] << " "; 
    }

    cout << ") is " << sum << endl;

    return 0;
}