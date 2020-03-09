#include <iostream>
using namespace std;

int main()
{
	int width[1001]{ 0, };
	int height[1001]{ 0, };
	int w, h;

	for (int i = 0; i < 3; i++) {
		cin >> w >> h;
		width[w]++;
		height[h]++;
	}

	for (int j = 1; j < 1001; j++) {
		if (width[j] == 1) {
			w = j;
			break;
		}
	}

	for (int k = 1; k < 1001; k++) {
		if (height[k] == 1) {
			h = k;
			break;
		}
	}

	cout << w << " " << h << endl;
}