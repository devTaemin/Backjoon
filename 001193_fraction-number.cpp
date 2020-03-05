#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numerator = 1, denominator = 1;
	int num, index, key;
	bool reverse = false;

	cin >> num;
	while (1) {
		key = 2 * pow(denominator, 2) - 2 * denominator + 1;
		if (num > key) {
			numerator++;
			denominator++;
		}
		else if (num == key) {
			cout << numerator << "/" << denominator << endl;
			return 0;
		}
		else {
			numerator--;
			denominator--;
			break;
		}
	}

	key = 2 * pow(denominator, 2) - 2 * denominator + 1;
	index = key;
	while (1) {
		if (index < num) {
			if (numerator == 1 && denominator == 1) {
				denominator++;
				index++;
				reverse = !reverse;
			}
			else {
				if (reverse) {
					if (denominator == 1) {
						numerator++;
						reverse = !reverse;
					}
					else {
						numerator++;
						denominator--;
					}
					index++;
				}
				else if (!reverse) {
					if (numerator == 1) {
						denominator++;
						reverse = !reverse;
					}
					else {
						numerator--;
						denominator++;
					}
					index++;
				}
			}
		}
		else {
			cout << numerator << "/" << denominator << endl;
			return 0;
		}
	}
}