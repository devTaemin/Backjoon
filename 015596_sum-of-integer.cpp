#include <vector>
using namespace std;


long long sum(std::vector<int>& a) {
	long long total = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}

int main()
{
	return 0;
}