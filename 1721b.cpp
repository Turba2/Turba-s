#include <iostream>
int main() {
    int a = 0;
    int n = 0;
    int m = 0;
    int sx = 0; 
    int sy = 0;
    int d = 0;
    std::cin >> a;
    for (int i = 0; i < a; i += 1) {
        std::cin >> n >> m >> sx >> sy >> d;
        if ((sy - d) > 1 && (sx + d) < n) {
            std::cout << (n + m) - 2 << std::endl;
        }
        else if ((sy + d) < m && (sx - d) > 1) {
            std::cout << (n + m) - 2 << std::endl;
        }
        else {
            std::cout << "-1" << std::endl;
        }
    }
}
