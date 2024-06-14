#include <iostream>

int main() {
    // initialize to the first odd number to be able to loop by adding 2
    int count{1};
    while (count <= 50) {
        std::cout << count << ' ';
        // every odd number is 2 away from the previous odd number
        count += 2;
    }
    return 0;
}
