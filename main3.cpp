#include <iostream>

float too1 (float a) {
    if (a<0)
        std::cout << "число отрицательное" << std::endl;
        else
        std::cout << "число положительное" << std::endl;

        return too2 (a);
}

float too2 (float a) {
    if (a>-40)
        if (a<5)
        std::cout << "входит в промежуток" << std::endl;
    else
        std::cout << "меньше промежутка" << std::endl;

    return too3 (a);
}

float too3 (float a) {
    return 0;
}

int main() {
    float a;
    std::cin >> a;
    std::cout << too1 (a) << std::endl;
    return 0;
}