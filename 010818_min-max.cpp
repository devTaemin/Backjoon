#include <iostream>
using namespace std;

int main()
{
	int n, *arr;
	
	cin >> n;
	arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for (int j = 0; j < n; j++) {
		if (arr[j] <= min) {
			min = arr[j];
		}
	}

	for (int k = 0; k < n; k++) {
		if (arr[k] >= max) {
			max = arr[k];
		}
	}

	cout << min << " " << max << endl;
}