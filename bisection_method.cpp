#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Define the function for which we want to find the root
double f(double x) {
    return x * x * x - x - 2; // Example: f(x) = x^3 - x - 2
}

// Bisection Method
void bisectionMethod(double a, double b, double tol, int maxIter) {
    // Check if f(a) and f(b) have opposite signs
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs." << endl;
        return;
    }

    double mid = a;
    int iter = 0;

    // Print the headers for the iteration table
    cout << "Iteration    a            b            Midpoint      f(Midpoint)" << endl;
    cout << "-------------------------------------------------------------" << endl;

    // Iterate until the interval size is smaller than tolerance or max iterations reached
    while ((b - a) >= tol && iter < maxIter) {
        mid = (a + b) / 2.0;
        double fMid = f(mid);

        // Output current iteration data
        cout << setw(10) << iter 
             << setw(15) << a 
             << setw(15) << b 
             << setw(15) << mid 
             << setw(15) << fMid << endl;

        // Check if we have found the root
        if (fabs(fMid) < tol) {
            break;
        }

        // Update the interval based on the sign of f(mid)
        if (f(a) * fMid < 0) {
            b = mid;  // Root is between a and mid
        } else {
            a = mid;  // Root is between mid and b
        }

        iter++;
    }

    // Output the result
    cout << "\nRoot found at x = " << mid << " after " << iter << " iterations." << endl;
    cout << "f(x) = " << f(mid) << endl;
}

int main() {
    double a, b, tol;
    int maxIter;

    // Input interval, tolerance, and maximum iterations
    cout << "Enter the interval [a]: ";
    cin >> a;
    cout << "Enter the interval [b]: ";
    cin >> b;
    cout << "Enter the tolerance: ";
    cin >> tol;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxIter;

    // Call the bisection method
    bisectionMethod(a, b, tol, maxIter);

    return 0;
}
