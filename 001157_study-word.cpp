#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[123] = { 0, };
	string s;
	char ch;
	int convert, index, max = -1;
	bool key = false;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		ch = s[i];
		convert = ch;
		if (convert >= 97) {
			convert -= 32;
		}
		arr[convert]++;
	}

	for (int j = 65; j < 123; j++) {
		if (arr[j] > max) {
			max = arr[j];
			index = j;
			key = false;
		}
		else if (arr[j] == max) {
			key = true;
		}
		else {
			continue;
		}
	}

	if (!key) {
		ch = index;
		cout << ch << endl;
	}
	else {
		cout << "?" << endl;
	}
}