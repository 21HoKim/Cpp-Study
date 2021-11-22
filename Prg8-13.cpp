#include<iostream>
using namespace std;
void printScores(int scores[][3], int num, int sub) {
	double avg,sum=0.0;
	cout << "번호\t국어\t수학\t영어\t평균" << endl;
	cout << "============================" << endl;
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "\t";
		for (int j = 0; j < sub; j++) {
			cout << scores[i][j] << "\t";
			sum += scores[i][j];
		}
		avg = sum / sub;
		cout << avg;
		cout << endl;
		sum = 0.0;
	}
}
int main() {
	const int NUM = 5, SUB = 3;
	int scores[NUM][SUB] = { {90,85,89},
							 {89,97,88},
							 {79,89,88},
							 {99,96,90},
							 {85,88,90} };

	

	printScores(scores, NUM, SUB);
	return 0;
}