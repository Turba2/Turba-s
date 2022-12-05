#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    std::string s{};
    int jk = 1;
    int lk = 0;
    for (int i = 0; i < t; i += 1){
        std::cin >> s;
        if (s.length() == 1){
            std::cout << 1;
            continue;
        }
        for (int j = 0; j < s.length(); j += 1){
            if (s[j] == '0'){
                jk = j;
                break;
            }
        }
        for (int l = s.length() - 1; l > 0; l -= 1){
            if (s[l] == '1'){
                lk = l;
                break;
            }
        }
        std::cout << std::abs(jk - lk) + 1 << std::endl;
    }
}
