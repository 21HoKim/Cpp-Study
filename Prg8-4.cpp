#include<iostream>
#include"Circle.h"
using namespace std;

int main() {
	const int indexCircle = 3;
	Circle circles[indexCircle];
	Circle c1 = 32;
	circles[0].setRadius(3.0); //메소드 이용
	circles[1] = Circle(4.0); //복사생성자 사용하는 효과(이름없어도 알아서 하나 만듬)
	circles[2] = (5.0); //매개변수있는 생성자 


	for (int i = 0; i < indexCircle; i++) {
		cout << "****circles[" << i << "] 의 정보****" << endl;
		cout <<"반지름"<< circles[i].getRadius() << endl;
		cout << "둘레" << circles[i].getPerimeter() << endl;
		cout << "면적" << circles[i].getArea() << endl;
	}

	return 0;
}