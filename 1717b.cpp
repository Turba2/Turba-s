#include<iostream>
int main() {
    int T = 0;
    std::cin >> T;
    while (T != 0) {
        int n = 0;
        int k = 0
        int r = 0;
        int c = 0;
        std::cin >> n >> k >> r >> c;
        for (int i = 1; i <= n; i += 1) {
            for (int j = 1; j <= n; j += 1) {
                if ((i + j) % k == (r + c) % k) {
                    std::cout << ('X');
                }
                else {
                    std::cout << ('.');
                }
            
            }
            std::cout << std::endl;
        }
        T -= 1;
    }
}
