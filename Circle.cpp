#include "Circle.h"
#include<iostream>
const double PI=3.14;
using namespace std;
//매개변수가 똑같은거 2개 만들면 안됨 -> 컴파일러가 찾지 못함(double, int)두개는 구분함
Circle::Circle() 
	:radius(0){
	//cout << "기본생성자 사용" << endl;
	count++;
}
Circle::Circle(double rad) 
	: radius(rad) { //rad로 받은 값을 radius에 넣음
	//cout << "매개변수이용하는 생성자 사용" << endl;
	count++;
}
Circle::Circle(const Circle& cir) 
	: radius(cir.radius) {
	//cout << "복사 생성자 사용" << endl;
	count++;
}
Circle::~Circle() {
	//cout << "소멸자 사용" << endl;
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
int Circle::count = 0; //static변수 초기화는 클래스 밖에