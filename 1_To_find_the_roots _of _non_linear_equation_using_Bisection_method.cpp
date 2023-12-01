#include <bits/stdc++.h>
using namespace std;
double equation(double x) {
    // Define your equation here
    // For example, let's solve 3*x - cos(x)  - 1
    return 3*x - cos(x)  - 1;
}

double bisectionMethod(double a, double b, double tolerance) {
    double c;
int n=1;
    while (fabs(b - a   ) >= tolerance) {



        c = (a + b) / 2;
cout<<"Iteration: "<<n<< " a = " << a << " b = " << b << " f(a) "<<equation(a)<< " f(b) "<<equation(b)<<" c = "<<c<<" f(c) "<<equation(c)<<endl;


        if (equation(c) == 0.0)
            return c;

        if (equation(c) * equation(a) < 0)
            b = c;
        else
            a = c;
n++;
    }
    cout<<"Iteration: "<<n<< " a = " << a << " b = " << b << " f(a) "<<equation(a)<< " f(b) "<<equation(b)<<" c = "<<c<<" f(c) "<<equation(c)<<endl;


    return c;
}

int main() {
    double a, b, tolerance;

    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;

    cout << "Enter the tolerance: ";
    cin >> tolerance;

    double root = bisectionMethod(a, b, tolerance);

    cout << "Approximate root: " << root << endl;

    return 0;
}
