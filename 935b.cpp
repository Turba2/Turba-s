#include <iostream>
#include <string>
int main() {
    int n = 0;
    std::cin >> n;
    int x = 0;
    int y = 0;
    std::string word{};
    std::cin >> word;
    int cash = 0;
    for(int i = 0; i < n; i += 1){
        if((word[i] == 'U')){
            x += 1;
        }
        if((word[i] == 'R')){
            y += 1;
        }
    if (x == y  && (word[i] == word[i+1])){
        cash += 1;
    }
    }
    std::cout << cash;
}
