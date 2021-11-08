#include<iostream>
#include<limits>
using namespace std;
int main() {
	double num1 = +numeric_limits<double>::max();
	double num2 = -numeric_limits<double>::max();
	cout << "double의 최대 : " << num1 << endl << "double의 최소" << num2 << endl;
	num1 *= 1000.00;
	num2 *= 1000.00;
	cout << "오버플로우 double : " << num1 << endl << "언더플로우 double : " << num2 << endl;
	return 0;
}