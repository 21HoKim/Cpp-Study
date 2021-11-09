#include<iostream>
#include"Circle.h"
using namespace std;


int main() {

	Circle c1; //c1이 객체를 의미
	Circle c2(3.0);
	//Circle c3(c1);
	c1.setRadius(5.0); //반지름 값 세팅
	cout << "반지름 : " << c1.getRadius() << endl;
	cout<<"Perimeter(둘레) : "<<c1.getPerimeter()<<endl;
	cout << "Area(면적) : " << c1.getArea() << endl;
	cout << "---------------------"<<endl;
	cout << "객체의 갯수 : " << c1.getCount() << endl;



	//c2.setRadius(10.0); //반지름 값 세팅
	cout << "반지름 : " << c2.getRadius() << endl;
	cout << "Perimeter(둘레) : " << c2.getPerimeter() << endl;
	cout << "Area(면적) : " << c2.getArea() << endl;
	cout << "---------------------" << endl;
	cout << "객체의 갯수 : " << c1.getCount() << endl;



	Circle c3(c1);
	cout << "반지름 : " << c3.getRadius() << endl;
	cout << "Perimeter(둘레) : " << c3.getPerimeter() << endl;
	cout << "Area(면적) : " << c3.getArea() << endl;
	cout << "---------------------" << endl;
	cout << "객체의 갯수 : " << c1.getCount() << endl;

	return 0;
}