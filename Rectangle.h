#pragma once
class Rectangle
{
private:
	double length;
	double height;
public:
	void serRectangle(double, double);
	void getRectangle(double&, double&);
	double getPerimeter();
	double getArea();
	void print();
};

