#include <iostream>
#include <cmath>
#include <limits>

// Define the function to be optimized
double function_to_optimize(double x) {
    return x * x * x - 3 * x * x + 7;
}

// Golden Ratio Search function
double golden_ratio_search(double start, double end, double tolerance = 1e-5) {
    const double golden_ratio = (sqrt(5) + 1) / 2;

    double point1 = end - (end - start) / golden_ratio;
    double point2 = start + (end - start) / golden_ratio;

    while (fabs(end - start) > tolerance) {
        if (function_to_optimize(point1) < function_to_optimize(point2)) {
            end = point2;
        } else {
            start = point1;
        }

        point1 = end - (end - start) / golden_ratio;
        point2 = start + (end - start) / golden_ratio;
    }

    return (end + start) / 2;
}

int main() {
    // Define the interval for optimization
    double interval_start = 1.0;
    double interval_end = 3.0;

    // Perform the golden ratio search
    double optimal_x_value = golden_ratio_search(interval_start, interval_end);
    double optimal_function_value = function_to_optimize(optimal_x_value);

    std::cout << "The optimal value of x is: " << optimal_x_value << std::endl;
    std::cout << "The optimal value of the function is: " << optimal_function_value << std::endl;

    return 0;
}
