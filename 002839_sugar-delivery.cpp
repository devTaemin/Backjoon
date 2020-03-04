#include <iostream>
using namespace std;

int main()
{
	int kilo, left;
	int num_three = 0, num_five = 0;
	int max, result;

	cin >> kilo;
	left = kilo;

	if (kilo >= 5) {
		//loop
		num_five = kilo / 5;
		max = num_five;
		for (int i = max; i >= 0; i--) {
			left = kilo - 5 * i;
			num_three = left / 3;
			if (left == num_three * 3) {
				num_five = i;
				result = num_five + num_three;
				cout << result << endl;
				return 0;
			}
		}
		cout << "-1" << endl;
	}
	else {
		num_three = left / 3;
		if (left == num_three * 3) {
			result = num_three;
			cout << result << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}