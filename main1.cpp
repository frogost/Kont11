#include <iostream>
#include <math.h>

float too (float m, float t, float x) {
    float res;
    res=(1/(t*sqrt(2*3.14)))*exp(-(pow((x-m),2))/(2*pow(t,2)));
    return res;
}

int main() {
    float m;
    float t;
    float x;
    std::cout << too (m,t,x) << std::endl;
    return 0;
}
