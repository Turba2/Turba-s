#include <iostream>
#include <string>
int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		std::string stroka;
		std::cin >> stroka;
		int len_stroka = 0;
		int count_repited = 1;
		int flag = 1;
		len_stroka = stroka.length();
		if (len_stroka == 1) {
			std::cout << "NO" << '\n';
			flag = 0;
		}
		else {
 
			for (int i = 0; i < len_stroka - 1; i++) {
				if (stroka[i] == stroka[i + 1]) {
					count_repited += 1;
				}
				else {
					if ((count_repited <= 2) || (stroka[len_stroka - 1] != stroka[len_stroka - 2])) {
						std::cout << "NO" << '\n';
						count_repited = 1;
						flag = 0;
						break;
 
					}
				}
			}
		}
		if (flag == 1) {
			std::cout << "Yes" << '\n';
		}
	}
 
}
