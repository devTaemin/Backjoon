#include <iostream>
using namespace std;

int main()
{
	int n, row1, row2;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int s = n;
		if (s % 2 == 0) {
			row1 = s / 2;
			row2 = s / 2;
			for (int j = 0; j < row1; j++) {
				cout << "* ";
			}
			cout << '\n';
			for (int k = 0; k < row2; k++) {
				cout << " *";
			}
			cout << '\n';
		}
		else {
			row1 = s / 2 + 1;
			row2 = s / 2;
			for (int j = 0; j < row1; j++) {
				cout << "* ";
			}
			cout << '\n';
			for (int k = 0; k < row2; k++) {
				cout << " *";
			}
			cout << '\n';
		}
	}
}