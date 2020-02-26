#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int num;
	double* score;
	string* arr;
	cin >> num;
	score = new double[num] {0, };
	arr = new string[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < num; j++) {
		int len = arr[j].length();
		double count = 0;
		for (int k = 0; k < len; k++) {
			if ((arr[j][k] == 'o') || (arr[j][k] == 'O')) {
				count++;
			}
			else if((arr[j][k-1] == 'o' || arr[j][k-1] == 'O') && (arr[j][k] == 'x' || arr[j][k] == 'X')){
				score[j] += ((pow(count,2) + count) / 2);
				count = 0;
			}
			else {
				continue;
			}
		}
		if (arr[j][len - 1] == 'o' || arr[j][len - 1] == 'O') {
			score[j] += ((pow(count, 2) + count) / 2);
		}
	}
	for (int m = 0; m < num; m++) {
		cout << score[m] << endl;
	}
}