#include <iostream>

int main() {
    int x = 0;
    int xxx = 0;
    std::cin >> x;
    while (x > 0){
        xxx += x & 1;
        x >>= 1;
    }
    std::cout << xxx;
}
