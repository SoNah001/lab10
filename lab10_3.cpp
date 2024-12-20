#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ifstream source("score.txt");
    if (!source) {
        cerr << "Error: Cannot open file score.txt\n";
        return 1;
    }
    
    vector<double> scores;
    double value;

    while (source >> value) {
        scores.push_back(value);
    }
    source.close();

    int n = scores.size();
    if (n == 0) {
        cerr << "Error: No data in file.\n";
        return 1;
    }

    double sum = 0;
    for (double score : scores) {
        sum += score;
    }
    double mean = sum / n;

    double sum_of_squares = 0;
    for (double score : scores) {
        sum_of_squares += pow(score - mean, 2);
    }
    double stddev = sqrt(sum_of_squares / n);

    cout << "Number of data = " << n << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << stddev << "\n";

    return 0;
}
