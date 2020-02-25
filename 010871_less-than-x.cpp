#include <iostream>
using namespace std;

int main()
{
	int item, n, x;
	cin >> n >> x; 

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> item;
		arr[i] = item;
	}

	for (int j = 0; j < n; j++) {
		if (arr[j] < x) {
			cout << arr[j] << " ";
		}
	}
}