#include <iostream>
using namespace std;

int main()
{
	int rep;
	cin >> rep;
	for (int i = 1; i <= rep; i++) {
		for (int j = rep; j > i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}