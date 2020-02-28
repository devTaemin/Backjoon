#include <iostream>
using namespace std;

int main()
{
	int case_num, stu_num;
	double avg, total = 0, count = 0;
	cin >> case_num;
	double* percent = new double[case_num];

	for (int i = 0; i < case_num; i++) {
		cin >> stu_num;
		double* score = new double[stu_num];
		total = 0;

		for (int j = 0; j < stu_num; j++) {
			cin >> score[j];
			total += score[j];
		}
		avg = total / stu_num;
		count = 0;
		for (int k = 0; k < stu_num; k++) {
			if (score[k] > avg) {
				count++;
			}
		}
		delete[] score;
		percent[i] = (count / stu_num) * 100;
	}


	for (int j = 0; j < case_num; j++) {
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << percent[j] << "%" << endl;
	}
	delete[] percent;
}