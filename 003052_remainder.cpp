#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int rem[42] = { 0, };
	int index, count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		index = arr[i] % 42;
		rem[index]++;
	}

	for (int j = 0; j < 42; j++) {
		if (rem[j] != 0) {
			count++;
		}
	}

	cout << count;
}