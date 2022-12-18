#include <iostream>
#include <string>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		std::string answers;
		std::cin >> answers;
		int count_robber = 0;
		int lenghtanswer;
		lenghtanswer = answers.length();
		int count_q = 0;
		int flag = 0;
		if ((lenghtanswer == 1) || (answers[0] == '0') || (answers[lenghtanswer - 1] == '1')) {
			count_robber = 1;
			std::cout << count_robber << '\n';
			goto next;
		}

		for (int i = 0; i < lenghtanswer; ++i) {
			if (answers[i] == '?') {
				count_q += 1;
			}
		}
		if (count_q == lenghtanswer) {
			count_robber = lenghtanswer;
			std::cout << count_robber << '\n';
		}

		for (int i = 0; i < lenghtanswer; ++i) {
			if (answers[i] == '1') {
				flag = i;
			}
			else {
				if (answers[i] == '?') {
					break;
				}
				else {
					if (answers[i] == '0') {
						count_robber = 2;
						std::cout << count_robber << '\n';
						goto next;
					}
				}
			}
		}
		if ((answers[lenghtanswer - 1] == '0') && (lenghtanswer > 1)) {
			for (int i = flag; i < lenghtanswer; ++i) {
				if (answers[i] == '0') {
					count_robber = i - flag - 1;
					std::cout << count_robber << '\n';
					break;
				}

			}

		}
		bool f2;

		if (answers[0] == '?') {
			for (int i = 1; i < lenghtanswer; ++i) {
				if (answers[i] == '?') {
					f2 = true;
				}
				else {
					if (answers[i] == '0') {
						count_robber = i + 1;
						std::cout << count_robber << '\n';
						break;
					}
				}
			}
		}
	next:
		int f3 = 0;
	}
}
