#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "abs(-8) = " << abs(-8) << endl; //절대값
	cout << "ceil(2.34) = " << ceil(2.34) << endl; //올림
	cout << "floor(2.34) = " << floor(2.34) << endl; //내림
	cout << "round(2.54) = " << round(2.54) << endl; //반올림
	cout << "round(2.34) = " << round(2.34) << endl; //반내림
	cout << "pow(2,3) = " << pow(2, 3) << endl; //x^y 
	cout << "log(100) = " << log(100) << endl; //x의 자연로그(밑이 e)를 리턴
	cout << "log10(100) = " << log10(100) << endl;//x의 상용로그(밑이 10)를 리턴
	cout << "exp(5) = " << exp(5) << endl; //e^x를 리턴
	cout << "sqrt(100) = " << sqrt(100)<<endl; // x의 제곱근을 리턴
	//삼각함수
	const double PI = 3.141592; //PI는 180도
	double degree = PI / 4;
	cout << "sin(45) : " << sin(degree) << endl;
	cout << "cos(45) : " << cos(degree) << endl;
	cout << "tan(45) : " << tan(degree) << endl;
	return 0;
}