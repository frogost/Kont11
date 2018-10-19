#include <iostream>

int too2(float a);
int too3(float a);

int too1 (float a) {
    if (a<0)
        std::cout << "число отрицательное" << std::endl;
    else
        std::cout << "число положительное" << std::endl;
    too2 (a);
}

int too2 (float a) {
    if (a>-40)
        if (a<5)
        std::cout << "входит в промежуток" << std::endl;
    else
        std::cout << "меньше промежутка" << std::endl;
    too3 (a);
}

int too3 (float a) {
    if (int(a)/10000>0)
    std::cout << "целое" << std::endl;
    else
    std::cout << "не целое" << std::endl;
    return 0;
}

int main() {
    float a;
    std::cin >> a;
    std::cout << too1 (a) << std::endl;
}