#include "../std_lib_facilities.h"

int main() {
    
    cout << "Please enter a series of distances, followed by '|': ";
    vector<double> dists;
    for (double dist; cin >> dist;) {
        dists.push_back(dist);
    };

    sort(dists);

    double sum = 0;
    for (double dist: dists) {
        sum += dist;
    };

    double small = dists[0];
    double large = dists[dists.size() - 1];
    double mean = sum / dists.size();

    cout << "Total Distances: " << sum << endl 
         << "Smallest Distance: " << small << endl
         << "Largest Distance: " << large << endl
         << "Mean Distance: " << mean << endl;
    
    return 0;
};