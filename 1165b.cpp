#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n = 0; //количество(длина массива)
    std::cin >> n;
    std::vector <int> contest;
    int cnt = 1;
    int otvet = 0;
    for(int i = 0; i < n; i += 1){
        int p = 0;
        std::cin >> p;
        contest.push_back(p);
    }
    std::sort(contest.begin(), contest.end());
    for(int j = 0; j < n; j += 1){
        if(cnt <= contest[j]){
            cnt += 1;
            otvet += 1;
        }
        else{
            continue;
        }
    }
    std::cout << otvet;
}
