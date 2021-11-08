#include "Circle.h"
const double PI=3.14;
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