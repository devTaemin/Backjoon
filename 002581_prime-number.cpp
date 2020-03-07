#include <iostream>
using namespace std;

int main()
{
	bool key = false;
	int count = 0, total = 0, min = 10001;
	int M, N;
	int value;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		key = false;
		value = i;
		if (value == 1) {
			continue;
		}
		else if (value == 2) {
			min = 2;
			count++;
			total += i;
			continue;
		}
		else {
			for (int j = 1; j < i; j++) {
				if (j == 1) {
					continue;
				}
				else if (value == 2) {
					min = 2;
					count++;
					total += i;
					continue;
				}
				else {
					if (i % j != 0) {
						key = true;
					}
					else {
						key = false;
						break;
					}
				}
			}
		}
		if (key) {
			if (value < min) {
				min = value;
			}
			total += value;
			count++;
		}
	}

	if (count <= 0) {
		cout << "-1" << endl;
	}
	else {
		cout << total << endl;
		cout << min << endl;
	}

	return 0;
}