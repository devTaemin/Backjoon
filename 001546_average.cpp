#include <iostream>
using namespace std;

int main()
{
	int n, max, sum = 0;
	int* arr;
	double avg;

	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	max = arr[0];
	for (int j = 0; j < n; j++) {
		if (max <= arr[j]) {
			max = arr[j];
		}
	}

	for (int k = 0; k < n; k++) {
		sum += arr[k];
	}

	avg = ((sum / (double)n) / (double)max) * 100;
	cout << avg << endl;
	delete[] arr;
}