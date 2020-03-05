#include <iostream>
using namespace std;

int main()
{
	int num, digit, total = 0;
	cin >> num;
	char str[num];
	cin >> str;

	for (int i = 0; i < num; i++) {
		digit = str[i] - 48;
		total += digit;
	}
	cout << total << endl;
}