#include "SimpleString.hpp"
#include <iostream>

int main() {
    MyString s("Hello");
    std::cout << s.c_str() << std::endl;
    return 0;
}
