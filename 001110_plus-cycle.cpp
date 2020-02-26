#include <iostream>
using namespace std;

int main()
{
	int init_value;
	int count = 0;
	int sum, temp, first, second;
	cin >> init_value;
	sum = init_value;
	while (true) {
		first = sum / 10;
		second = sum % 10;
		if (first == 0) {
			sum = second * 10 + second;
			count++;
		}
		else {
			temp = (first + second) % 10;
			sum = second * 10 + temp;
			count++;
		}
		if (sum == init_value) {
			break;
		}
		else {
			continue;
		}
	}
	cout << count << endl;
}