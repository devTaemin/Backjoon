#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int num, len, index, count = 0;;
	string str;
	char ch;
	bool key = true;

	cin >> num;
	for (int i = 0; i < num; i++) {
		int arr[26];
		for (int k = 0; k < 26; k++) {
			arr[k] = -1;
		}

		cin >> str; // abcabc
		len = str.size(); // 6

		for (int j = 0; j < len; j++) {
			ch = str[j];
			index = ch - 97;

			if (arr[index] != -1) {
				if (abs(j - arr[index]) != 1) {
					key = false;
					break;
				}
				else {
					arr[index] = j;
					continue;
				}
			}
			else {
				arr[index] = j;
			}
		}

		if (key) {
			count++;
		}
		else { key = true; }
	}

	cout << count << endl;
}