#include <iostream>
using namespace std;

int main()
{
	int num, i = 1, count = 1;
	cin >> num;
	if (num > 1) {
		while (num - 1 > 0) {
			count++;
			num -= 6 * i;
			i++;
		}
	}
	cout << count << endl;
	return 0;
}