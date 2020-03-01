#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int total = a * b * c;
	int arr[10] = { 0, };
	int rep;
	int elem;

	if (total >= 100000000) {
		rep = 100000000;
		while (rep >= 1) {
			elem = total / rep;
			total -= (elem * rep);
			arr[elem]++;
			rep /= 10;
		}
	}
	else if (total >= 10000000) {
		rep = 10000000;
		while (rep >= 1) {
			elem = total / rep;
			total -= (elem * rep);
			arr[elem]++;
			rep /= 10;
		}
	}
	else {
		rep = 1000000;
		while (rep >= 1) {
			elem = total / rep;
			total -= (elem * rep);
			arr[elem]++;
			rep /= 10;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}