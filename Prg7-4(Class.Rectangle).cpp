#include<iostream>
#include"Rectangle.h"
using namespace std;

int main() {
	Rectangle c1;
	double len, hei;
	c1.serRectangle(5.0, 7.0); //�غ�, ����
	c1.getRectangle(len, hei);
	cout << "�ѷ� : " << c1.getPerimeter() << endl;
	cout << "���� : " << c1.getArea() << endl;
	cout << "�غ� : " << len<<endl;
	cout << "���� : " << hei;
	return 0;
}