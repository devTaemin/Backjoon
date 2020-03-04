#include <iostream>
#include <string>
using namespace std;

int main()
{
	string* arr;
	int num, rep;
	string s, result = "";
	char ch;

	cin >> num;
	arr = new string[num];

	for (int i = 0; i < num; i++) {
		cin >> rep;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			ch = s[j];
			for (int k = 0; k < rep; k++) {
				result += ch;
			}
		}
		arr[i] = result;
		result = "";
	}

	for (int l = 0; l < num; l++) {
		cout << arr[l] << endl;
	}
}