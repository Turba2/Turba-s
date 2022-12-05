#include <iostream>
int main()
{
    int n = 0;
    int k = 0;
    int f = 0;
    int t = 0;
    long long int max1 = -10000000000000, per = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1){
        std::cin >> f >> t;
        if (t > k){
            per = f - (t - k);
        }else{
            per = f;
        }
        if (per > max1){
            max1 = per;
            
        }
    }
    std::cout << max1;
}
