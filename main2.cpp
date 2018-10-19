#include <iostream>

float too (float a) {
    if ((a-int(a))>0)
        std::cout << "Дробное" << std::endl;
    else
        std::cout << "Не дробное" << std::endl;

}

int main() {
    float a;
    std::cin >> a;
    std::cout << too (a) << std::endl;
    return 0;
}