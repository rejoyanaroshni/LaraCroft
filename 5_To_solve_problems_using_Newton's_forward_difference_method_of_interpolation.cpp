#include <iostream>
#include <vector>

using namespace std;

double forwardInterpolation(vector<double>& x, vector<double>& y, double targetX) {
    int n = x.size();
    double result = 0;

    for (int i = 0; i < n; ++i) {
        double term = y[i]; // Initialize term with the value from y

        double numerator = 1.0;
        double denominator = 1.0;

        for (int j = 0; j < n; ++j) {
            if (j != i) {
                numerator *= (targetX - x[j]);
                denominator *= (x[i] - x[j]);
            }
        }

        term *= numerator / denominator; // Calculate the term for this point
        result += term; // Add the calculated term to the final result
    }

    return result;
}

int main() {
    vector<double> x = {1931, 1941, 1951, 1961, 1971, 1981};   // x values
    vector<double> y = {12, 15, 20, 27, 39, 52}; // corresponding f(x) values

    double targetX = 1934;
    double estimatedValue = forwardInterpolation(x, y, targetX);

    cout << "Estimated value at x = " << targetX << " is: " << estimatedValue << endl;

    return 0;
}
