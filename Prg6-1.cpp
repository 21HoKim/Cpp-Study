#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "abs(-8) = " << abs(-8) << endl; //���밪
	cout << "ceil(2.34) = " << ceil(2.34) << endl; //�ø�
	cout << "floor(2.34) = " << floor(2.34) << endl; //����
	cout << "round(2.54) = " << round(2.54) << endl; //�ݿø�
	cout << "round(2.34) = " << round(2.34) << endl; //�ݳ���
	cout << "pow(2,3) = " << pow(2, 3) << endl; //x^y 
	cout << "log(100) = " << log(100) << endl; //x�� �ڿ��α�(���� e)�� ����
	cout << "log10(100) = " << log10(100) << endl;//x�� ���α�(���� 10)�� ����
	cout << "exp(5) = " << exp(5) << endl; //e^x�� ����
	cout << "sqrt(100) = " << sqrt(100)<<endl; // x�� �������� ����
	//�ﰢ�Լ�
	const double PI = 3.141592; //PI�� 180��
	double degree = PI / 4;
	cout << "sin(45) : " << sin(degree) << endl;
	cout << "cos(45) : " << cos(degree) << endl;
	cout << "tan(45) : " << tan(degree) << endl;
	return 0;
}