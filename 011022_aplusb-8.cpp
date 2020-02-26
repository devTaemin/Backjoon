#include <iostream>
using namespace std;

int main()
{
	int testcase, a, b;
	cin >> testcase;
	for (int i = 1; i <= testcase; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b
			<< " = " << a + b << endl;
	}
}