#include<iostream>
#include"Circle.h"
using namespace std;

int main() {
	const int indexCircle = 3;
	Circle circles[indexCircle];
	Circle c1 = 32;
	circles[0].setRadius(3.0); //�޼ҵ� �̿�
	circles[1] = Circle(4.0); //��������� ����ϴ� ȿ��(�̸���� �˾Ƽ� �ϳ� ����)
	circles[2] = (5.0); //�Ű������ִ� ������ 


	for (int i = 0; i < indexCircle; i++) {
		cout << "****circles[" << i << "] �� ����****" << endl;
		cout <<"������"<< circles[i].getRadius() << endl;
		cout << "�ѷ�" << circles[i].getPerimeter() << endl;
		cout << "����" << circles[i].getArea() << endl;
	}

	return 0;
}