#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	int num;
	int number_student=0;
	cout << "정수를 입력하세요(종료하려면 음수 입력) : ";
	cin >> num;
	while (num >= 0) {
		sum += num;
		cout << "정수를 입력하세요(종료하려면 음수 입력) : ";
		cin >> num;
		number_student++;
	}
	cout << "총 합 : " <<sum << endl;
	cout << "평균 : " << (double)sum / number_student << endl;
	return 0;
}