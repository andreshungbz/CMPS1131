#include <iostream>
// #include <limits>
using namespace std;

int findSmallest(int);

int main() {
    int numberOfInputs = 0;
    cout << "Enter number of integers you want to input: ";
    cin >> numberOfInputs;
    // Call the function, findSmallest passing in numberOfInputs
    int result{findSmallest(numberOfInputs)};
    // Here we print the results
    cout << "Smallest number entered is " << result << ".\n";
    return 0;
}

// Function implementation - This function will take an integer as a parameter which represents the number of times the person will be prompted to enter integers
// The function will return the smallest number of all numbers entered

int findSmallest(int inputs) {
    // assumption: input is greater than 0
    // use the first input as reference because I forgot how to use limits library to compare to the max integer
    // int max{std::numeric_limits<int>::max()};
    cout << "Enter a number: ";
    int smallest;
    cin >> smallest;

    for (int i{inputs}; i > 1; --i) {
        cout << "Enter a number: ";
        int number;
        cin >> number;

        if (number < smallest) {
            smallest = number;
        }
    }

    return smallest;
}
