#include <iostream>
using namespace std;

int main()
{
	int value, n;
	int count = 0;
	bool key = false;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> value;
		if (value == 1) {
			continue;
		}
		else if (value == 2) {
			count++;
			continue;
		}
		else {
			for (int j = 1; j < value; j++) {
				key = false;
				if (j == 1) {
					continue;
				}
				else {
					if (value % j == 0) {
						key = false;
						break;
					}
					else {
						key = true;
					}
				}
			}
			if (key) {
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}