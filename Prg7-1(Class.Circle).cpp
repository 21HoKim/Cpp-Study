#include<iostream>
#include"Circle.h"
using namespace std;


int main() {

	Circle c1; //c1�� ��ü�� �ǹ�
	Circle c2(3.0);
	//Circle c3(c1);
	c1.setRadius(5.0); //������ �� ����
	cout << "������ : " << c1.getRadius() << endl;
	cout<<"Perimeter(�ѷ�) : "<<c1.getPerimeter()<<endl;
	cout << "Area(����) : " << c1.getArea() << endl;
	cout << "---------------------"<<endl;
	cout << "��ü�� ���� : " << c1.getCount() << endl;



	//c2.setRadius(10.0); //������ �� ����
	cout << "������ : " << c2.getRadius() << endl;
	cout << "Perimeter(�ѷ�) : " << c2.getPerimeter() << endl;
	cout << "Area(����) : " << c2.getArea() << endl;
	cout << "---------------------" << endl;
	cout << "��ü�� ���� : " << c1.getCount() << endl;



	Circle c3(c1);
	cout << "������ : " << c3.getRadius() << endl;
	cout << "Perimeter(�ѷ�) : " << c3.getPerimeter() << endl;
	cout << "Area(����) : " << c3.getArea() << endl;
	cout << "---------------------" << endl;
	cout << "��ü�� ���� : " << c1.getCount() << endl;

	return 0;
}