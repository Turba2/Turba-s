#include <iostream>
#include <vector>
 
int main() {
  int n = 0, N = 0, k = 0, m;
  std::cin >> n;
  std::vector<int> v;
  for (int i = 0; i < n; i += 1) {
    std::cin >> N;
    v.push_back(N);
  }
  for (int i = n-1; i >= 0; i -= 1) {
    for (int j = i - 1; j >= 0; j -= 1) {
      if (v[j] == v[i]) {
        v[j] = 0;
      }
    }
  }for (int a : v) {
    if (a != 0) {
      k += 1;
    }
  }
  std::cout << k <<"\n";
  for (int a : v) {
    if (a != 0) {
      std::cout << a << " ";
    }
  }
  std::cin >> m;
}
