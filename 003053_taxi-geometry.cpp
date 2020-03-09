#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double result1, result2;
	const double pi = acos(-1.0);
	int r;

	cin >> r;
	result1 = pow(r, 2) * pi;
	result2 = 2 * pow(r, 2);

	cout.setf(ios::fixed);
	cout.precision(6);
	cout << result1 << endl;
	cout << result2 << endl;
	return 0;
}