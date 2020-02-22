#include <iostream>
using namespace std;

int main()
{
	int rep;
	cin >> rep;
	for (int i = 1; i <= rep; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
}