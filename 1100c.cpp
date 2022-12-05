#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
int main() {
    int n = 0;
    int r = 0;
    double R;
    double pi = M_PI;
    std::cin >> n >> r;
    R = (r * (std::sin(M_PI / n)) / (1 - std::sin(M_PI / n)));
    printf("%.7f", R);
}
