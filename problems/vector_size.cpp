#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int input;

    while (std::cin >> input && input != 0) {
        numbers.push_back(input);
    }

    std::cout << "Size of the vector: " << numbers.size() << std::endl;

    return 0;
}