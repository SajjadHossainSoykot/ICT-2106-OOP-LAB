#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double calculateMean(const vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

double calculateVariance(const vector<double>& numbers, double mean) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += pow(num - mean, 2);
    }
    return sum / numbers.size();
}

double calculateStandardDeviation(double variance) {
    return sqrt(variance);
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<double> numbers(N);
    cout << "Enter the numbers:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    double mean = calculateMean(numbers);
    double variance = calculateVariance(numbers, mean);
    double standardDeviation = calculateStandardDeviation(variance);

    cout << "Mean: " << mean << endl;
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}
