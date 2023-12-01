#include <iostream>
#include <vector>

using namespace std;

double lagrangeInterpolation(vector<double> x, vector<double> y, double targetX) {
    double result = 0.0;

    for (int i = 0; i < x.size(); i++) {
        double term = y[i];
        for (int j = 0; j < x.size(); j++) {
            if (j != i) {
                term = term * (targetX - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    // Given data
    vector<double> x = {0, 2, 3, 5, 6};
    vector<double> y = {5, 7, 8, 10, 12};

    // Test with a specific value (replace with desired input)
    double targetX = 4;

    // Perform Lagrange's interpolation
    double result = lagrangeInterpolation(x, y, targetX);

    // Output the result
    cout << "Interpolated value at x=" << targetX << ": " << result << endl;

    return 0;
}
