#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int first = B / 100;
	int second = (B - (first * 100)) / 10;
	int third = B - ((first * 100) + (second * 10));

	cout << A * third << endl;
	cout << A * second << endl;
	cout << A * first << endl;
	cout << A * B << endl;
}