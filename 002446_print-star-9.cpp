#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// 2n - 1
	int w = 0;
	for (int i = n; i > 0; i--) {
		int s = 2 * i - 1;
		for (int j = 0; j < w; j++) {
			cout << " ";
		}
		while (s != 0) {
			cout << "*";
			s--;
		}
		cout << '\n';
		w++;
	}

	w = n - 2;
	for (int i = 2; i <= n; i++) {
		int s = 2 * i - 1;
		for (int j = 0; j < w; j++) {
			cout << " ";
		}
		while (s != 0) {
			cout << "*";
			s--;
		}
		cout << '\n';
		w--;
	}
}