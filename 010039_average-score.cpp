#include <iostream>
using namespace std;

int main()
{
	int stu1, stu2, stu3, stu4, stu5;
	int total;

	cin >> stu1 >> stu2 >> stu3 >> stu4 >> stu5;
	if (stu1 < 40) { stu1 = 40; }
	if (stu2 < 40) { stu2 = 40; }
	if (stu3 < 40) { stu3 = 40; }
	if (stu4 < 40) { stu4 = 40; }
	if (stu5 < 40) { stu5 = 40; }
	total = stu1 + stu2 + stu3 + stu4 + stu5;
	cout << total / 5 << '\n';
}