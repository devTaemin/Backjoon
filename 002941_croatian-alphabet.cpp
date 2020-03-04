#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	char ch;
	int len, count = 0;
	cin >> word;
	len = word.size();

	for (int i = 0; i < len; i++) {
		ch = word[i];
		if (ch == 'c') {
			if (i + 1 < len) {
				if (word[i + 1] == '=' || word[i + 1] == '-') {
					i++;
					count++;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else if (ch == 'd') {
			if (i + 1 < len) {
				if (word[i + 1] == '-') {
					i++;
					count++;
				}
				else if (word[i + 1] == 'z') {
					i++;
					if (i + 1 < len) {
						if (word[i + 1] == '=') {
							i++;
							count++;
						}
						else {
							count += 2;
						}
					}
					else {
						count += 2;
					}
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else if (ch == 'l') {
			if (i + 1 < len) {
				if (word[i + 1] == 'j') {
					i++;
					count++;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else if (ch == 'n') {
			if (i + 1 < len) {
				if (word[i + 1] == 'j') {
					i++;
					count++;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else if (ch == 's') {
			if (i + 1 < len) {
				if (word[i + 1] == '=') {
					i++;
					count++;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else if (ch == 'z') {
			if (i + 1 < len) {
				if (word[i + 1] == '=') {
					i++;
					count++;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		}
		else {
			count++;
		}
	}
	cout << count << endl;
}