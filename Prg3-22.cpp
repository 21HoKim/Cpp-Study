#include<iostream>
using namespace std;
int main() {
	int x ;
	cout << "정수값을 입력하세요: ";
	cin >> x;
	cout << "x의 10진수 값: " << x << endl;
	cout << "x의 8진수 값: " << oct << x << endl;
	cout << "x의 16진수 값: " << hex << x << endl<< endl;

	cout << "x의 10진수 값: " <<showbase<<dec<< x << endl;
	cout << "x의 8진수 값: " <<showbase<< oct << x << endl;
	cout << "x의 16진수 값: "<<showbase<< hex << x << endl << endl;
	bool a = 2;
	cout <<noshowbase <<boolalpha << a<<endl;
	return 0;
}