#pragma once
class Circle
{
	//�Ӽ�
private:
	double radius;
	static int count;

	//����
public:
	Circle(); //�⺻������
	Circle(double); //�Ű������� �ִ� ������
	Circle(const Circle&); //���������
	~Circle();//�Ҹ���
	double getPerimeter();
	double getArea();
	void setRadius(double);
	double getRadius();
	int getCount();
};

