#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	long long A, B, C, num;
	double x = 0;
	cin >> A >> B >> C;

	if (C - B <= 0) {
		cout << -1 << endl;
	}
	else {
		x = A / (C - B);
		num = ceil(x);
		if (x == num) {
			num++;
		}
		cout << num << endl;
	}
}

