#include<iostream>
#include<cmath>
using namespace std;
int main() {
	const double PI = 3.141592;
	int n;
	double s, peri, area;
	do {
		cout << "���� ����(4�̻� ����) : ";
		cin >> n;
	} while (n < 4);
	do {
		cout << "���Ǳ��� : ";
		cin >> s;
	} while (s <= 0.0);
	peri = n * s; //�ѷ�
	area = (n * pow(s, 2)) / (n * tan(PI / n));
	cout << "�ѷ� : " << peri << endl << "���� : " << area << endl;
	return 0;
}