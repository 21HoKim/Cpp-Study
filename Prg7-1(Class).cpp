#include<iostream>
#include"Circle.h"
using namespace std;


int main() {

	Circle c1,c2; //c1�� ��ü�� �ǹ�

	c1.setRadius(5.0); //������ �� ����
	cout << "������ : " << c1.getRadius() << endl;
	cout<<"Perimeter(�ѷ�) : "<<c1.getPerimeter()<<endl;
	cout << "Area(����) : " << c1.getArea() << endl;
	cout << endl;
	c2.setRadius(10.0); //������ �� ����
	cout << "������ : " << c2.getRadius() << endl;
	cout << "Perimeter(�ѷ�) : " << c2.getPerimeter() << endl;
	cout << "Area(����) : " << c2.getArea() << endl;


	return 0;
}