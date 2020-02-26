#include <iostream>
using namespace std;

int main()
{
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int index = 1;
	
	for (int j = 0; j < 9; j++) {
		if (max <= arr[j]) {
			max = arr[j];
			index = j + 1;
		}
	}
	cout << max << endl;
	cout << index << endl;
}