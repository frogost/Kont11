#include <iostream>
#include <math.h>

double too (float m, float t, float x) {
    return (1/(t*sqrt(2*3.14)))*exp(-(pow((x-m),2))/(2*pow(t,2)));
}

int main() {
    float m=5;
    float t=5;
    float x=5;
    std::cout << too (m,t,x) << std::endl;
    return 0;
}
