#include<iostream>
using namespace std;
int main() {
	int score;
	char grade;
	do {
		cout << "점수를 입력하세요(0~100) : ";
		cin >> score;
	} while (score > 100 || score<0);

	switch (score / 10) {

	case 10:grade = 'A'; break;
	case 9:grade='A';break;
		case 8:grade='B'; break;
		case 7:grade='C'; break;
		case 6:grade='D'; break;
		default: grade = 'F'; break;
	}
	cout << "학점 = " << grade << endl;
	return 0;
}