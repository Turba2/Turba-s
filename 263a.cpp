#include <iostream>
int main(){
    int str = 5;
    int st = 5;
    int a = 0;
    int b = 0;
    int** arr = new int* [str];
    for (int i = 0; i < 5; i += 1){
        arr[i] = new int[st];
    }
    for (int i = 0; i < str; i++){
        for (int j = 0; j < st; j++){
            std::cin >> arr[i][j];
            if (arr[i][j] == 1){
                a = i + 1;
                b = j + 1;
            }
        }
    }
    std::cout << abs(a - 3) + abs(b-3);
    
}
