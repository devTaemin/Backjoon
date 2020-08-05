#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int rep;
	int x1, y1, r1;
	int x2, y2, r2;
	double length;

	cin >> rep;
	for (int i = 0; i < rep; i++)
	{
		cin >> x1 >> y1 >> r1
			>> x2 >> y2 >> r2;
		length = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

		if (length == 0)
		{
			if (r1 == r2) {
				cout << -1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else
		{
			if (length < (r1 + r2)) {
				if (abs(r2 - r1) > length) {
					cout << 0 << '\n';
				}
				else if (abs(r2 - r1) == length) {
					cout << 1 << '\n';
				}
				else {
					cout << 2 << '\n';
				}
			}
			else if (length == (r1 + r2)) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
	}
}