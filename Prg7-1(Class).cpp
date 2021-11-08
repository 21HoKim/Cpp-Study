#include<iostream>
#include"Circle.h"
using namespace std;


int main() {

	Circle c1,c2; //c1이 객체를 의미

	c1.setRadius(5.0); //반지름 값 세팅
	cout << "반지름 : " << c1.getRadius() << endl;
	cout<<"Perimeter(둘레) : "<<c1.getPerimeter()<<endl;
	cout << "Area(면적) : " << c1.getArea() << endl;
	cout << endl;
	c2.setRadius(10.0); //반지름 값 세팅
	cout << "반지름 : " << c2.getRadius() << endl;
	cout << "Perimeter(둘레) : " << c2.getPerimeter() << endl;
	cout << "Area(면적) : " << c2.getArea() << endl;


	return 0;
}