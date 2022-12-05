
#include <iostream>
#include <math.h>
int main(){
    int t = 0;
    int n = 0;
    int cnt = 0;
    int nn = 0;
    std::cin >> t;
    for (int i = 0; i < t; i +=1){
        std::cin >> n;
        nn = n;
        while (nn != 0){
            if (nn % 10 != 0){
                cnt += 1;
            }
            nn = nn / 10;
        }
        std::cout << cnt << "\n";
        cnt = 0;
        for (int i = 4; i >= 0; i-=1){
            if ((int)(n / pow(10, i)) % 10  != 0){
                std::cout << ((int)(n / pow(10, i))%10) * pow(10, i) << " ";
            }
        }
    }
    
}
