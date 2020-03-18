#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

long long num_sum(long long n) {
	if (n == 1) {
		return 1;
	}
	else {
		return (pow(n, 2) + n) / 2;
	}
}


long long function(long long distance) {
	int root = sqrt(distance);
	long long count = (2 * root) - 1;
	if (distance == 1) {
		return 1;
	}
	else if (distance == 2) {
		return 2;
	}
	else if (distance == 3 || distance == 4) {
		return 3;
	}
	else {
		if (distance == (root * root)) {
			return count;
		}
		else if (distance > (root * root) && distance <= (root * root) + root) {
			return count + 1;
		}
		else {
			return count + 2;
		}
	}
}


int main()
{
	long long T, result;
	long long distance, x, y;
	vector<long long> answer;
	cin >> T;


	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		distance = y - x;
		result = function(distance);
		answer.push_back(result);
	}

	for (int j = 0; j < T; j++) {
		cout << answer[j] << '\n';
	}

}