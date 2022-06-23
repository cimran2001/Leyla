#include <iostream>
#include "Vector.hpp"
#include <vector>


int main() {
    Vector arr;

    std::cout << arr.capacity() << std::endl;

    arr.push_back(5);
}
