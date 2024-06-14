#include <iostream>
#include <string>
#include <string_view>

void printByTen(int s, int e);
std::string repeat(std::string_view s, int num);

int main() {
    std::cout << "Enter starting number: ";
    int start;
    std::cin >> start;

    std::cout << "Enter ending number: ";
    int end;
    std::cin >> end;

    std::cout << "Result: ";
    printByTen(start, end);

    std::cout << "Enter string: ";
    std::string string;
    std::getline(std::cin >> std::ws, string);

    std::cout << "Enter number of times: ";
    int number;
    std::cin >> number;

    std::cout << "Result: " << repeat(string, number) << '\n';
    return 0;
}

void printByTen(int s, int e) {
    while (s <= e) {
        std::cout << s << ' ';
        s += 10;
    }
    std::cout << '\n';
}

std::string repeat(std::string_view s, int num) {
    std::string result;
    for (; num > 0; --num) {
        result += s;
    }
    return result;
}
