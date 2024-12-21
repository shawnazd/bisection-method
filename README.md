# 🔢 Bisection Method for Root-Finding  🔢

## Project Description 📝

This project implements the **Bisection Method**, a numerical technique for finding the roots of continuous functions. The method is based on the intermediate value theorem, which guarantees the existence of a root within a given interval if the function changes sign at the interval's endpoints. The Bisection Method iteratively narrows down the interval until the root is found within a specified tolerance.

This repository contains two implementations of the Bisection Method:
- **C++ Implementation**: `bisection_method.cpp`
- **Python Implementation**: `bisection_method.py`

## Purpose 🎯

The purpose of this project is to demonstrate the Bisection Method for solving nonlinear equations numerically. The code was created for educational purposes as part of a **Numerical Analysis** course, where the objective was to implement and understand root-finding algorithms.

## Functionality ⚙️

The program solves the equation \( f(x) = x^3 - x - 2 \) using the Bisection Method, but the function can easily be modified in both C++ and Python implementations. The user provides an interval `[a, b]` such that the function values at `a` and `b` have opposite signs, along with a tolerance value and a maximum number of iterations.

### Features:
- Input the interval `[a, b]`, tolerance, and maximum iterations.
- Iteratively calculates the midpoint and evaluates the function at the midpoint.
- Outputs the progress of the method with each iteration: current interval, midpoint, and function value.
- Stops when the tolerance condition is met or the maximum iterations are reached.

## How to Use 🖥️

### C++ Implementation:
1. Compile the C++ code:
   ```bash
   g++ -o bisection_method bisection_method.cpp
   ```
2. Run the compiled program:
   ```bash
   ./bisection_method
   ```
3. Enter the required values (interval `[a]`, `[b]`, tolerance, and maximum iterations) when prompted.

### Python Implementation:
1. Ensure you have Python installed.
2. Run the Python code:
   ```bash
   python bisection_method.py
   ```
3. Enter the required values (interval `[a]`, `[b]`, tolerance, and maximum iterations) when prompted.

## Example Output 📊

### Input:
```
Enter the interval [a]: 1
Enter the interval [b]: 2
Enter the tolerance: 0.001
Enter the maximum number of iterations: 10
```

### Output:
```
Iteration    a            b            Midpoint        f(Midpoint)
-------------------------------------------------------------
0            1.0          2.0          1.5             -0.125
1            1.5          2.0          1.75            1.609375
...
Root found at x = 1.52051 after 10 iterations.
f(x) = -0.002186
```

## Dependencies 🛠️

- **C++**: Requires a C++ compiler (e.g., g++).
- **Python**: Requires Python 3.x.


## Thank You 🙏

Thank you for checking out this project! If you have any questions or suggestions, feel free to open an issue or create a pull request.
```
