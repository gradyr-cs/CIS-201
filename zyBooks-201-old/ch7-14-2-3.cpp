#include <iostream>
using namespace std;

// Class representing a distance with kilometers and meters
class Distance {
public:
    // Constructor with default values
    Distance(double kilometers = 0.0, double meters = 0.0);

    // Function to print the distance
    void Print() const;

    // Overloaded subtraction operator for subtracting two distances
    Distance operator-(Distance rhs);

    // Overloaded subtraction operator for subtracting a distance and a double
    Distance operator-(double rhs);

private:
    double km; // Kilometers part of the distance
    double m;  // Meters part of the distance
};

// Constructor implementation
Distance::Distance(double kilometers, double meters) {
    km = kilometers;
    m = meters;
}

// Overloaded subtraction operator for subtracting two distances
Distance Distance::operator-(Distance rhs) {
    double newKm = km - rhs.km;
    double newM = m - rhs.m;

    // Ensure that the meters are non-negative
    if (newM < 0) {
        newKm -= 1;
        newM += 1000;
    }

    return Distance(newKm, newM);
}

// Overloaded subtraction operator for subtracting a distance and a double
Distance Distance::operator-(double rhs) {
    double newKm = km - rhs;
    double newM = m;

    // Ensure that the kilometers are non-negative
    if (newKm < 0) {
        newKm = 0;
        newM = 0;
    }

    return Distance(newKm, newM);
}

// Function to print the distance
void Distance::Print() const {
    cout << km << " kilometers, " << m << " meters";
}

int main() {
    // Variables to store user input
    double kilometers1, meters1, kilometers2, meters2;

    // Read input from the user
    cin >> kilometers1 >> meters1 >> kilometers2 >> meters2;

    // Create Distance objects for the provided input
    Distance distance1(kilometers1, meters1);
    Distance distance2(kilometers2, meters2);

    // Calculate the differences using overloaded operators
    Distance difference1 = distance1 - distance2;
    Distance difference2 = distance1 - kilometers2;

    // Print the original distances and their differences
    distance1.Print();
    cout << endl;
    distance2.Print();
    cout << endl;
    cout << "Difference: ";
    difference1.Print();
    cout << endl;

    cout << endl;

    distance1.Print();
    cout << endl;
    cout << kilometers2 << " kilometers" << endl;
    cout << "Difference: ";
    difference2.Print();
    cout << endl;

    return 0;
}