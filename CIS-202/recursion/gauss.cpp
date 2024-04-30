#include <iostream>

using namespace std;

// Experiment with the factorial algorithm.Is this correct?

int sum(int n) {
    return n * (n + 1) / 2;
}


// this algorithm is recursive, because it calls itself.
unsigned int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {

    int userInput;
    cout << "Input an integer: ";
    cin >> userInput;

    cout << "The result using the Factorial Function is " << factorial(userInput) << endl;

    cout << "The result using the sum function is " << sum(userInput) << endl;

    return 0;
}