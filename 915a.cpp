#include <iostream>
int main() {
    int n = 0;
    int dlina = 0;
    std::cin >> n >> dlina;
    int minv = 1000;
    for(int i = 0; i < n; i += 1){
        int a = 0;
        std::cin >> a;
        if (dlina % a == 0){
            if ((dlina / a) < minv){
                minv = dlina / a;
            }
        }
    }
    std::cout << minv;
}
