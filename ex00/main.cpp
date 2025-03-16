#include "easyfind.hpp"

void printo(int n) {
    std::cout << n << " ";
}

int main() {
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    std::cout << "_____________vector_____________\n";
    std::cout << "           ";
    std::for_each(vec.begin(), vec.end(), printo);
    std::cout << std::endl;

    std::cout << std::endl;
    try {
        std::cout << "_____________test1_____________\n";
        std::vector<int>::iterator it1 = easyfind(vec, 5);
        std::cout << "Element found in the index: " << std::distance(vec.begin(), it1) << std::endl;
        std::cout << std::endl;

    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "_____________test2_____________\n";
        std::vector<int>::iterator it2 = easyfind(vec, 1);
        std::cout << "Element found in the index: " << std::distance(vec.begin(), it2) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}