#include<iostream>
using namespace std;
int main() {
	int i = 1;
	double average=0;
	int score = 0;
	int sum=0;
	while (i <= 4) {
		cout << i << "�� �л� ������ �Է��ϼ��� : ";
		cin >> score;
		sum = sum + score;
		i++;
	}
	i--;
	average = (double)sum / i;
	cout << "�հ� : " << sum << endl;
	cout << "��� : " << average << endl;
	return 0;
}