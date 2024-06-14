#include <iostream>

int main() {
    std::cout << "Smallest Value Finder\n\n";
    std::cout << "Enter number of values to input: ";
    int num;
    std::cin >> num;

    std::cout << "Enter a number: ";
    int smallest;
    std::cin >> smallest;

    for (int i{1}; i < num; ++i) {
        std::cout << "Enter a number: ";
        int entry;
        std::cin >> entry;

        if (entry < smallest) {
            smallest = entry;
        }
    }

    std::cout << "\nThe smallest number is: " << smallest;
    return 0;
}
