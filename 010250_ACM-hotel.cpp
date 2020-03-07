#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, H, W;
	int num;
	int* answer;
	bool key = false;
	int result, temp_H, temp_W;

	cin >> T;
	answer = new int[T] {0, };
	for (int k = 0; k < T; k++) {
		cin >> H >> W >> num;
		vector<vector<int>> hotel(H, vector<int>(W, 0));
		int priority = 1;

		for (int j = 0; j < W; j++) {
			for (int i = 0; i < H; i++) {
				hotel[i][j] = priority;
				priority++;
			}
		}

		for (int l = 0; l < W; l++) {
			for (int m = 0; m < H; m++) {
				if (hotel[m][l] == num) {
					temp_H = m + 1;
					temp_W = l + 1;
					key = true;
					break;
				}
			}
			if (key) { break; }
		}

		temp_H *= 100;
		result = temp_H + temp_W;
		answer[k] = result;
		key = false;
	}

	for (int p = 0; p < T; p++) {
		cout << answer[p] << endl;
	}
	delete[] answer;

}