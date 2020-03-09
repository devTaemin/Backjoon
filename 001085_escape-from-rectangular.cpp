#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	int d1, d2, d3, d4;
	int min;

	cin >> x >> y >> w >> h;
	min = (x <= w - x) ? x : w - x;
	min = (min <= y) ? min : y;
	min = (min <= h - y) ? min : h - y;
	cout << min << '\n';
}