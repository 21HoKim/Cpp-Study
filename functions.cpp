#include<iostream>
#include"fxf.h"
using namespace std;

int main() {
	double a = 5,b;
	//cout << "f(" << a << ") = " << f(a) << endl;
	//cout << "g(" << a << ") = " << g(a) << endl;
	//cout << "h(" << a << ") = " << h(a) << endl;
	get_data(a,b);
	cout << a<<" " << b<<endl;
	ch(a, b);
	cout << a <<" " << b;
	//cout << get_data() << endl;
	return 0;

}