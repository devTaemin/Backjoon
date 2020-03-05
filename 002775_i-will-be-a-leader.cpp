#include <iostream>
using namespace std;


int count_population(int fl, int std) {
	int res;
	int arr[15]{ 0, }, temp[15]{ 0, };
	for (int i = 0; i < 15; i++) {
		arr[i] = i;
	}

	for (int i = 1; i <= fl; i++) {
		for (int j = 1; j <= std; j++) {
			for (int k = 1; k <= j; k++) {
				temp[j] += arr[k];
			}
		}

		for (int m = 0; m < 15; m++) {
			arr[m] = temp[m];
			temp[m] = 0;
		}
	}
	res = arr[std];
	return res;
}


int main()
{
	int T, floor, studio, temp;

	cin >> T;
	int* result = new int[T] {0, };
	for (int i = 0; i < T; i++) {
		cin >> floor >> studio;
		temp = count_population(floor, studio);
		result[i] = temp;
	}

	for (int j = 0; j < T; j++) {
		cout << result[j] << endl;
	}

	delete[] result;
}
