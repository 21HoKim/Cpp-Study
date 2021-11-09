#include<iostream>
#include"Rectangle.h"
using namespace std;

int main() {
	Rectangle c1;
	double len, hei;
	c1.serRectangle(5.0, 7.0); //πÿ∫Ø, ≥Ù¿Ã
	c1.getRectangle(len, hei);
	cout << "µ—∑π : " << c1.getPerimeter() << endl;
	cout << "≥–¿Ã : " << c1.getArea() << endl;
	cout << "πÿ∫Ø : " << len<<endl;
	cout << "≥Ù¿Ã : " << hei;
	return 0;
}