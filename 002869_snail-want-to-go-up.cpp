#include <iostream>
using namespace std;

int main()
{
	int A, B, V;
	int count = 0;
	int target;

	cin >> A >> B >> V;
	if (V <= A) {
		count++;
		cout << count << endl;
	}
	else {
		target = V - A;
		count = target / (A - B);

		if (target % (A - B) != 0) {
			count++;
			cout << ++count << endl;
		}
		else {
			cout << ++count << endl;
		}
	}
}