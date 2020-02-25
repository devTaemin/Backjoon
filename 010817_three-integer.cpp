#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int A, B, C, ans;
	cin >> A >> B >> C;
	
	if (max(A, B) == A && max(A, C) == A) {
		ans = max(B, C);
	}
	else if (max(A, B) == B && max(B, C) == B) {
		ans = max(A, C);
	}
	else {
		ans = max(A, B);
	}
	cout << ans;
}