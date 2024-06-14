#include <iostream>

int main() {
    int n{4};
    int k{2};
    std::cout << ++n << std::endl;
    std::cout << n << std::endl;
    std::cout << n++ << std::endl;
    std::cout << n-- << std::endl;
    std::cout << n << std::endl;
    std::cout << n + k << std::endl;
    return 0;
}
