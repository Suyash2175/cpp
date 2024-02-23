#include <iostream>
#include <random>

int main() {
    // Set up random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> dist(0, 1); // Mean = 0, Standard deviation = 1

    // Generate 10 random numbers from the Gaussian distribution
    for (int i = 0; i < 10; ++i) {
        double number = dist(gen);
        std::cout << "Random number " << i+1 << ": " << number << std::endl;
    }

    return 0;
}
