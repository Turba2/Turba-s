#include <iostream>
#include <vector>
int main()
{
  int t = 0;
  std::cin >> t;
  int dlina = 1;
  while (t--) {
    int n = 0;
    std::cin >> n;
    dlina = 1;
    std::vector <int> arr(n);
    for (int ich = 0; ich < n; ich++) {
      std::cin >> arr[ich];
    }

    for (int ich = 0; ich < n - 1; ich++) { 
      if (arr[ich] == 0 && arr[ich + 1] == 0) {
        dlina = -1;
        goto ans;
      }
    }

    for (int ich = 0; ich < n - 1; ich++) {   
      if (arr[ich] == 1 && arr[ich + 1] == 1) {
        dlina += 5;
      }
    
    if (arr[ich] == 1 && arr[ich + 1] == 1) {
        arr[ich]=0;
      }
    }
    
    for (int ich = 0; ich < n; ich++) { 
      if (arr[ich] == 1) {
        dlina += 1;
      }
    }
    ans:
    std::cout << dlina << '\n';
  }
}
