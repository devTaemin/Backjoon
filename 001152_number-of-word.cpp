#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int len, count = 0;
	getline(cin, str);
	len = str.size();

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			count++;
		}
	}

	if (str[0] == ' ') {
		count--;
	}

	if (str[len - 1] == ' ') {
		count--;
	}

	count += 1;
	cout << count << endl;
}