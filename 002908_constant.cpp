#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str1, str2;
	int compare1 = 0, compare2 = 0, temp;
	char ch;

	cin >> str1 >> str2;

	for (int i = 2; i >= 0; i--) {
		ch = str1[i];
		temp = ch;
		temp -= 48;
		compare1 += (temp * pow(10, i));
	}

	for (int j = 2; j >= 0; j--) {
		ch = str2[j];
		temp = ch;
		temp -= 48;
		compare2 += (temp * pow(10, j));
	}

	if (compare1 > compare2) {
		cout << compare1 << endl;
	}
	else if (compare1 < compare2) {
		cout << compare2 << endl;
	}
	else {
		cout << "Error!" << endl;
	}
}