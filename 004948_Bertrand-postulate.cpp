#include <iostream>
#include <vector>
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
	int trial, count;
	vector<int> answer;
	while (true) {
		cin >> trial;
		if (trial == 0) {
			for (int i = 0; i < answer.size(); i++) {
				cout << answer[i] << '\n';
			}
			break;
		}
		else {
			count = 0;
			for (int j = trial + 1; j <= 2 * trial; j++) {
				if (is_prime(j)) {
					count++; 
				}
			}
			answer.push_back(count);
		}
	}
}