#include <iostream>
using namespace std;

char result[2500][2500];


void init()
{
	for (int i = 0; i < 2500; i++) {
		for (int j = 0; j < 2500; j++) {
			result[i][j] = ' ';
		}
	}
}


void paint(int n, int col, int row)
{
	if (n == 1)
	{
		result[col][row] = '*';
		return;
	}

	int div = n / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((i == 1) && (j == 1)) {
				continue;
			}
			paint(div, col + (div * i), row + (div * j));
		}
	}
	return;
}

int main()
{
	int n;
	cin >> n;

	init();
	paint(n, 0, 0);

	for (int q = 0; q < n; q++) {
		for (int p = 0; p < n; p++) {
			cout << result[q][p];
		}
		cout << '\n';
	}

}