#pragma once
class Circle
{
	//속성
private:
	double radius;
	static int count;

	//행위
public:
	Circle(); //기본생성자
	Circle(double); //매개변수가 있는 생성자
	Circle(const Circle&); //복사생성자
	~Circle();//소멸자
	double getPerimeter();
	double getArea();
	void setRadius(double);
	double getRadius();
	int getCount();
};

