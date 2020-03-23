#include <iostream>
#include <vector>
using namespace std;

void ascending_v(vector<int>& v) {
	int len = v.size();
	for (int i = 0; i < len; i++) {
		int min = v[i];
		int index = i;
		for (int j = i + 1; j < len; j++) {
			if (min > v[j]) {
				index = j;
				min = v[j];
			}
		}
		v[index] = v[i];
		v[i] = min;
	}
}

int main()
{
	int size;
	cin >> size;
	vector<int> v;
	
	for (int i = 0; i < size; i++) {
		int elem;
		cin >> elem;
		v.push_back(elem);
	}
	ascending_v(v);
	for (int j = 0; j < size; j++) {
		cout << v[j] << '\n';
	}
}