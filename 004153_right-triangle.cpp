#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool right_triangle(int a, int b, int c) {
	int max = -1;
	max = (max >= a) ? max : a;
	max = (max >= b) ? max : b;
	max = (max >= c) ? max : c;

	if (max == a) {
		if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
			return true;
		}
	}
	else if (max == b) {
		if (pow(b, 2) == (pow(a, 2) + pow(c, 2))) {
			return true;
		}
	}
	else {
		if (pow(c, 2) == (pow(a, 2) + pow(b, 2))) {
			return true;
		}
	}
	return false;
}

int main()
{
	int max;
	int len1, len2, len3;
	vector<bool> v;
	while (true) {
		cin >> len1 >> len2 >> len3;
		if (len1 == 0 && len2 == 0 && len3 == 0) {
			break;
		}
		else {
			if (right_triangle(len1, len2, len3) == true) {
				v.push_back(true);
			}
			else {
				v.push_back(false);
			}
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == true) {
			cout << "right" << endl;
		}
		else {
			cout << "wrong" << endl;
		}
	}
}