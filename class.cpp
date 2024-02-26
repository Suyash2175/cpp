#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to set the name
    void setName(std::string n) {
        name = n;
    }

    // Member function to set the age
    void setAge(int a) {
        age = a;
    }

    // Member function to get the name
    std::string getName() const {
        return name;
    }

    // Member function to get the age
    int getAge() const {
        return age;
    }

    // Member function to display information about the person
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person("John", 30);

    // Using member functions to set and get information
    person.setAge(35);
    person.setName("Alice");

    // Displaying information about the person
    std::cout << "Person's name: " << person.getName() << std::endl;
    std::cout << "Person's age: " << person.getAge() << std::endl;

    // Displaying information using the display() member function
    person.display();

    return 0;
}
