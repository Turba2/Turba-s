#include <iostream>
int main() {
    int w = 0;
    std::cin >> w;
    for (int i = w+1;i<=9999;i+=1){
    int a = i / 1000;
    int b = (i/100) % 10;
    int c = (i/10) % 10;
    int d = i % 10;
    bool Z = a != b;
    Z = Z && a != c;
    Z = Z && a != d;
    Z = Z && b != c;
    Z = Z && b != d;
    Z = Z && d != c;
    if (Z){
        std::cout << i;
        break;
    }
    }
}
