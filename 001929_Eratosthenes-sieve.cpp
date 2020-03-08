#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
	bool key = true;
	if (n == 1) {
		return !key;
	}
	else if (n == 2) {
		return key;
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				key = false;
				break;
			}
		}
	}
	return key;
}




int main()
{
	int m, n;
	cin >> m >> n;

	if (m == 1 && n == 1) {
		return 0;
	}
	else {
		bool* prime = new bool[n + 1]{ false, };
		for (int i = 2; i <= n; i++) {
			prime[i] = true;
		}

		for (int j = 2; j <= n; j++) {
			if (prime[j] == true) {
				if (is_prime(j) == true) {
					for (int k = 2; j * k <= n; k++) {
						prime[j * k] = false;
					}
				}
			}
			else {
				continue;
			}
		}

		for (int l = m; l <= n; l++) {
			if (prime[l] == true) {
				cout << l << '\n';
			}
		}
	}
}