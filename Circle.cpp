#include "Circle.h"
#include<iostream>
const double PI=3.14;
using namespace std;
//�Ű������� �Ȱ����� 2�� ����� �ȵ� -> �����Ϸ��� ã�� ����(double, int)�ΰ��� ������
Circle::Circle() 
	:radius(0){
	//cout << "�⺻������ ���" << endl;
	count++;
}
Circle::Circle(double rad) 
	: radius(rad) { //rad�� ���� ���� radius�� ����
	//cout << "�Ű������̿��ϴ� ������ ���" << endl;
	count++;
}
Circle::Circle(const Circle& cir) 
	: radius(cir.radius) {
	//cout << "���� ������ ���" << endl;
	count++;
}
Circle::~Circle() {
	//cout << "�Ҹ��� ���" << endl;
	count--;
}

double Circle::getPerimeter() {
	return radius* radius * PI;
}
double Circle::getArea() {
	return radius * radius;
}
void Circle::setRadius(double r) {
	radius = r;
}
double Circle::getRadius() {
	return radius;
}
int Circle::getCount() {
	return count;
}
int Circle::count = 0; //static���� �ʱ�ȭ�� Ŭ���� �ۿ�