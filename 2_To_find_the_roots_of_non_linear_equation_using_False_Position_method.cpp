#include <bits/stdc++.h>
using namespace std;

double equation(double x) {
    // Define your equation here
    // For example, let's solve 3x-cos(x)-1
    return pow(x,2)+x-6;
}

double falsePositionMethod(double a, double b, double tolerance) {
    double c;

  while (fabs(equation(c)) >= tolerance){
        // Calculate the function values at the endpoints
        double fa = equation(a);
        double fb = equation(b);

        // Calculate the approximate root using the false position formula
        c = (a * fb - b * fa) / (fb - fa);
cout<<"Iteration: "<<1<< " a = " << a << " b = " << b << " f(a) "<<equation(a)<< " f(b) "<<equation(b)<<" c = "<<c<<" f(c) "<<equation(c)<<endl;
        // Check if c is the root
        if (equation(c) == 0.0){
            return c;
        }
        // Update the interval based on the signs of function values
        if (equation(c) * fa < 0)
            b = c;
        else
            a = c;

    }

    return c;
}

int main() {
    double a, b, tolerance;

    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    cout << "Enter the tolerance: ";
    cin >> tolerance;

    double root = falsePositionMethod(a, b, tolerance);

    cout << "Approximate root: " << root << endl;

    return 0;
}

