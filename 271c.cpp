#include <iostream>
int main() {
    int year=0;
    std::cin>> year;
    for (int y = year +1 ;year<=100000; y++)
    {
        int a1 = y / 1000;
        int a2 = y / 100 % 10;
        int a3 = y / 10 % 10;
        int a4 = y % 10;
        if (a1!=a2 && a1!=a3 && a1!=a4 && a2!=a3 && a2!=a4 && a3!=a4 ) {
            
            std :: cout<< y;
            break;
    
        } 
    }
}
