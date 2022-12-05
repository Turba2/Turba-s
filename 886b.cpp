#include <iostream>
#include <vector>
#include <map>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> V(n), D;
    std::map<int, int> mapp;
    for (int i = 0; i < n; ++i) {
        std::cin >> V[i];
    }
    int mini = 1000000;
    for (int j = 0; j < n; ++j){
        mapp[V[j]] = j;
    }
    std::map<int, int> z(mapp.begin(), mapp.end());
    for (int j = 0; j < n; ++j){
        if (mapp.at(V[j]) < mini) {
            mini = mapp.at(V[j]);
            D.push_back(V[j]);
        }
    }
    std::cout << D[D.size() - 1];
}
