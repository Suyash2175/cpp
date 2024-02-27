#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
public:
    // Constructor
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Method to display car info
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    // Method to update car model
    void updateModel(string newModel) {
        model = newModel;
    }
};

int main() {
    // Create car objects
    Car car1("Toyota", "Corolla", 2022);
    Car car2("Honda", "Civic", 2020);

    // Display car info
    cout << "Car 1 Info:" << endl;
    car1.displayInfo();

    cout << "\nCar 2 Info:" << endl;
    car2.displayInfo();

    // Update car model
    car1.updateModel("Camry");

    // Display updated car info
    cout << "\nCar 1 Updated Info:" << endl;
    car1.displayInfo();

    return 0;
}
