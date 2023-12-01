
#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return 1.0 / sqrt(1.0 + x * x);
}

double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;

    double result = (func(a) + func(b)) / 2.0;
    for (int i = 1; i < n; i++) {
        double x_i = a + i * h;
        double y_i = func(x_i);
        result += func(x_i);
    }

    return h * result;
}

int main() {
    double a = 0.0;
    double b = 1.0;
    int n = 5;

    double integral = trapezoidalRule(a, b, n);

    cout << "The approximate integral value: " << integral << endl;

    return 0;
}

Or,
#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return 1.0 / sqrt(1.0 + x * x);
}

double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;

    double result = (func(a) + func(b)) / 2.0;
    cout<<"beginning result: "<<result<<endl;
    for (int i = 1; i < n; i++) {
        double x_i = a + i * h;
        double y_i = func(x_i);
        cout<<"iteration ---- x_i: "<<x_i<<" __ and __ "<< "y_i: "<<y_i<<endl;
        result += func(x_i);
        cout<<"iteration result: "<<result<<endl;
    }

    return h * result;
}

int main() {
    double a = 0.0;
    double b = 1.0;
    int n = 5;

    double integral = trapezoidalRule(a, b, n);

    cout << "The approximate integral value: " << integral << endl;

    return 0;
}
