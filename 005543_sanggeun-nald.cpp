#include <iostream>
using namespace std;

int main()
{
	int price_b1, price_b2, price_b3;
	int coke, soda;
	int total = 0, min;

	cin >> price_b1 >> price_b2 >> price_b3 >> coke >> soda;

	if (price_b1 <= price_b2) {
		min = price_b1;
	}
	else {
		min = price_b2;
	}
	if (price_b3 <= min) {
		min = price_b3;
	}

	total += min;

	if (coke <= soda) {
		min = coke;
	}
	else {
		min = soda;
	}

	total += min;
	total -= 50;

	cout << total << endl;

}