#include<iostream>
using namespace std;
int main() {
	int i = 1;
	double average=0;
	int score = 0;
	int sum=0;
	while (i <= 4) {
		cout << i << "번 학생 점수를 입력하세요 : ";
		cin >> score;
		sum = sum + score;
		i++;
	}
	i--;
	average = (double)sum / i;
	cout << "합계 : " << sum << endl;
	cout << "평균 : " << average << endl;
	return 0;
}