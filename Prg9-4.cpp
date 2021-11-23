#include<iostream>
using namespace std;
int main() {
	bool f = true;
	int i = 100;
	double d = 10.34;
	cout << "f : " << f << endl;
	cout << "f's size : " << sizeof(bool) << endl;
	cout << "adress : " << &f << endl;
	cout << "i : " << i << endl;
	cout << "i's size : " << sizeof(int) << endl;
	cout << "adress : " << &i << endl;
	cout << "d : " << d << endl;
	cout << "d's size : " << sizeof(double) << endl;
	cout << "adress : " << &d << endl;

}