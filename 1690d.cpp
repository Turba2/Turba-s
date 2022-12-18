#include <iostream>
#include <string>
 
int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		int n = 0;
		int k = 0;
		int f0 = 0;
		std::cin >> n >> k;
		std::string stroka;
		std::cin >> stroka;
		int length = 0;
		length = stroka.length();
		int lastB = 0;
		int nextB = 0;
		int kount = 0;
		int count_B = 0;
		int sym = 0;  
		
		for (int i = nextB; i < length - 1; ++i) {
 
			if (stroka[i] == 'B') { 
				count_B += 1;
				for (int j = i + 1; j < length; ++j) {
					if (stroka[j] == 'B') {                   
						count_B += 1;
						lastB = j;
					}
					else {
						if ((j + 1) < length) {
							nextB = j + 1;
							sym += 1;
						}
						else {
							sym += 1;
							goto first;
 
						}
					}
					
				
				first:
					if ((count_B + sym) >= k) {
						std::cout << sym << '\n';
						goto ans;
					}
					if (count_B >= k) {
						std::cout << 0 << '\n';
						goto ans;
					}
					
				}
			
			}
 
		}
		if ((count_B == 0) && (stroka[length-1]!='B')) {
			if (length >= k) {
				std::cout << k << '\n';
			}
		}
	
		for (int ch = 0; ch < stroka.length() - 1; ++ch) {
			if (stroka[ch] != 'B') {
				kount += 1;
			}
			else {
				goto ans;
			}
		}
		if ((kount == length - 1) && (stroka[length - 1] == 'B')) {
			std::cout<<length-1<<'\n';
		}
	ans:
		f0 = 1;
	}
}
