#include <iostream>
#include <vector>
int main() {
	int t = 0;
	int n = 0;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		std::vector<int> a(n);
		std::vector<int> b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
			std::cin >> b[i];
		}
		std::vector<int> tm(n);
		for (int i = 0; i < n; i++) {
			std::cin >> tm[i];
		}

		int vremz_zaderjki = 0;
		int ans = 0;
		int vremz_ost = 0;
		for (int i = 0; i<n;i++) {
			ans = ans + (a[i] - vremz_zaderjki + tm[i]);
			vremz_ost = (b[i] - a[i] + 1) / 2;
			if (i< (n - 1)) {
				ans += vremz_ost;
			}
			if (ans<b[i]) {
				if (i<n - 1) {
					ans = b[i];
				}
			}
			vremz_zaderjki = b[i];
		}
		std::cout << ans << '\n';


	}
}
