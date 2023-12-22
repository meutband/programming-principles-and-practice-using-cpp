#include "../std_lib_facilities.h"

int main() 
{

    cout << "Please enter some numbers: ";

    vector<double> values;
    double val;

    while (cin >> val) 
    {
        values.push_back(val);
    }

    if (values.size() == 0) error("entered 0 numbers to total.");

    cout << "The difference between each number is:";
    vector<double> diffs;
    for (double i = 1; i < values.size(); ++i) {
        double diff = values[i] - values[i-1];
        diffs.push_back(diff);
        if (diff > 0) {
            cout << " +" << diff;
            continue;
        } 
        cout << " " << diff;
    }
    cout << endl;
    return 0;
}