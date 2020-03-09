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
	int num, value;
	int part_a, part_b;
	vector<int> v;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> value;
		part_a = value / 2;
		part_b = value / 2;
		for (int j = 0; j < value / 2; j++) {
			if (is_prime(part_a) == true && is_prime(part_b) == true) {
				v.push_back(part_a);
				v.push_back(part_b);
				break;
			}
			else {
				part_a--;
				part_b++;
			}
		}
	}

	for (int k = 0; k < v.size(); k++) {
		if (k % 2 == 0) {
			cout << v[k] << " ";
		}
		else {
			cout << v[k] << '\n';
		}
	}
}