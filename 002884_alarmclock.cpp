#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (H >= 1) {
		if (M >= 45) {
			M = M - 45;
			cout << H << " " << M;
		}
		else {
			H = H - 1;
			M = M + 60 - 45;
			cout << H << " " << M;
		}
	}
	else {
		if (M >= 45) {
			M = M - 45;
			cout << H << " " << M;
		}
		else {
			H = 24;
			H = H - 1;
			M = M + 60 - 45;
			cout << H << " " << M;
		}
	}
}