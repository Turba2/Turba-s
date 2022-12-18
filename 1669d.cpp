#include <iostream>;
#include <string>;

int main() {
	int n = 0;
	int t = 0;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int w = 0;
		int r = 0;
		int b = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'B') {
				b += 1;
			}
			if (s[i] == 'R') {
				r += 1;
			}
		}

		if ((r >= 1)) {
			if (b >= 1) {
				std::cout << "YES"<<'\n';
			}
			else {
				std::cout << "NO"<<'\n';
			}
		}
	}
}
