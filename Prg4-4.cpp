#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	int larger;
	cout << "ù��° ���� �Է�: ";
	cin >> num1;
	cout << "�ι�° ���� �Է�: ";
	cin >> num2;
	if (num1 >= num2) {
		larger = num1;
	}
	if (num1 < num2) {
		larger = num2;
	}
	/*else {
		larger = num2;
	}*/
	cout << "�� ū ���� = " << larger;
	return 9;
}