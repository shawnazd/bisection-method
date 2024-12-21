# Define the function for which we want to find the root
def f(x):
    return x**3 - x - 2  # Example: f(x) = x^3 - x - 2

# Bisection Method
def bisection_method(a, b, tol, max_iter):
    # Check if f(a) and f(b) have opposite signs
    if f(a) * f(b) >= 0:
        print("Invalid interval. f(a) and f(b) must have opposite signs.")
        return
    
    iter = 0
    print(f"{'Iteration':<10}{'a':<15}{'b':<15}{'Midpoint':<15}{'f(Midpoint)'}")
    print("-" * 60)
    
    # Iterate until the interval size is smaller than tolerance or max iterations reached
    while (b - a) >= tol and iter < max_iter:
        mid = (a + b) / 2.0
        f_mid = f(mid)

        # Output current iteration data
        print(f"{iter:<10}{a:<15}{b:<15}{mid:<15}{f_mid:<15}")

        # Check if we have found the root
        if abs(f_mid) < tol:
            break

        # Update the interval based on the sign of f(mid)
        if f(a) * f_mid < 0:
            b = mid  # Root is between a and mid
        else:
            a = mid  # Root is between mid and b

        iter += 1

    # Output the result
    print(f"\nRoot found at x = {mid} after {iter} iterations.")
    print(f"f(x) = {f(mid)}")

# Input interval, tolerance, and maximum iterations
a = float(input("Enter the interval [a]: "))
b = float(input("Enter the interval [b]: "))
tol = float(input("Enter the tolerance: "))
max_iter = int(input("Enter the maximum number of iterations: "))

# Call the bisection method
bisection_method(a, b, tol, max_iter)
