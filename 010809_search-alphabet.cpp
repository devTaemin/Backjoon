#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { 0, };
	char ch;
	int index, convert;
	string s;
	cin >> s;

	for (int k = 0; k < 26; k++) {
		arr[k] = -1;
	}

	for (int i = 0; i < s.size(); i++) {
		index = i;
		ch = s[index];
		convert = ch;
		convert -= 97;
		if (arr[convert] == -1) {
			arr[convert] = index;
		}
	}

	for (int j = 0; j < 25; j++) {
		cout << arr[j] << " ";
	}
	cout << arr[25] << endl;
}