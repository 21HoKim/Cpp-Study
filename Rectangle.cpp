#include "Rectangle.h"
#include<iostream>
using namespace std;
void Rectangle::serRectangle(double len, double hei){
	length = len;
	height = hei;
}
void Rectangle::getRectangle(double& len, double& hei) {
	len = length;
	hei = height;
}
double Rectangle::getPerimeter(){
	return length * 2 + height * 2;
}
double Rectangle::getArea(){
	return length * height;
}
void Rectangle::print(){
	cout << "¹Øº¯ : " << length<<endl;
	cout << "³ôÀÌ : " << height<<endl;
}