#include <iostream>

float too (float a) {
    if (a==1) {
        std::cout << "Hello, World!1" << std::endl;
        std::cout << "Hello, World!2" << std::endl;
        std::cout << "Hello, World!3" << std::endl;
    }
}

float too1 (float a) {
    a++;
    return too(a);
}

int main() {
    float a;
    std::cout << too1 (a) << std::endl;
    return 0;
}