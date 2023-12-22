#include "../std_lib_facilities.h"

void printSum(vector<int> vec, string day)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum += vec[i];
    }
    cout << day << ": " << sum << endl;
}

int main() {

    vector<int> mon;
    vector<int> tue;
    vector<int> wed;
    vector<int> thur;
    vector<int> fri;
    vector<int> sat;
    vector<int> sun;

    string day;
    int value;

    while (cin >> day >> value) 
    {

        if (day == "Monday" || day == "monday" | day == "mon") {
            mon.push_back(value);
            continue;
        }

        if (day == "Tuesday" || day == "tuesday" | day == "tue") {
            tue.push_back(value);
            continue;
        }

        if (day == "Wednesday" || day == "wednesday" | day == "wed") {
            wed.push_back(value);
            continue;
        }

        if (day == "Thursday" || day == "thursday" | day == "thur") {
            thur.push_back(value);
            continue;
        }

        if (day == "Friday" || day == "friday" | day == "fri") {
            fri.push_back(value);
            continue;
        }

        if (day == "Saturday" || day == "saturday" | day == "sat") {
            sat.push_back(value);
            continue;
        }

        if (day == "Sunday" || day == "sunday" | day == "sun") {
            sun.push_back(value);
            continue;
        }

    }

    printSum(mon, "Monday");
    printSum(tue, "Tuesday");
    printSum(wed, "Wednesday");
    printSum(thur, "Thursday");
    printSum(fri, "Friday");
    printSum(sat, "Saturday");
    printSum(sun, "Sunday");

}