#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k = i + 1;
		while (k != 0) {
			cout << "*";
			k--;
		}
		cout << '\n';
	}

	for (int j = n - 1; j > 0; j--) {
		int k = j;
		while (k != 0) {
			cout << "*";
			k--;
		}
		cout << '\n';
	}
}