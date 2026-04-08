#include "SimpleString.hpp"
#include <iostream>
#include <string>

int main() {
    std::string input;
    if (std::cin >> input) {
        MyString s(input.c_str());
        std::cout << s.c_str() << std::endl;
    }
    return 0;
}
