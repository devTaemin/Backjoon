#include <iostream>
using namespace std;

void self_num() {
	int arr[10001] = { 0, };
	int total;
	int first, second, third, fourth, fifth;
	for (int i = 1; i < 10001; i++) {
		int j = i;
		while (j < 10001) {
			if (j < 10) {
				total = j + j;
				if (total <= 10000 && arr[total] == 0) {
					arr[total] = 1;
				}
				j = total;
			}
			else if (j < 100) {
				first = j / 10;
				second = j % 10;
				total = j + first + second;
				if (total <= 10000 && arr[total] == 0) {
					arr[total] = 1;
				}
				j = total;
			}
			else if (j < 1000) {
				first = j / 100;
				second = (j - (first * 100)) / 10;
				third = (j - (first * 100) - (second * 10));
				total = j + first + second + third;
				if (total <= 10000 && arr[total] == 0) {
					arr[total] = 1;
				}
				j = total;
			}
			else if (j < 10000) {
				first = j / 1000;
				second = (j - (first * 1000)) / 100;
				third = (j - (first * 1000) - (second * 100)) / 10;
				fourth = (j - (first * 1000) - (second * 100) - (third * 10));
				total = j + first + second + third + fourth;
				if (total <= 10000 && arr[total] == 0) {
					arr[total] = 1;
				}
				j = total;
			}
			else {
				first = j / 10000;
				second = (j - (first * 10000)) / 1000;
				third = (j - (first * 10000) - (second * 1000)) / 100;
				fourth = (j - (first * 10000) - (second * 1000) - (third * 100)) / 10;
				fifth = (j - (first * 10000) - (second * 1000) - (third * 100) - (fourth * 10));
				total = j + first + second + third + fourth + fifth;
				if (total <= 10000 && arr[total] == 0) {
					arr[total] = 1;
				}
				j = total;
			}
		}
	}

	for (int k = 1; k < 10001; k++) {
		if (arr[k] == 0) {
			cout << k << endl;
		}
	}
}


int main()
{
	self_num();
}