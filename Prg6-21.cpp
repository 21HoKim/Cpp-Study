#include<iostream>
using namespace std;
namespace A {
	int a=45;
}

int a = 25;
int main() {
	int a=5;
	cout << ::a << endl;//:: ���������� ������
	cout << a << endl;
	cout<<A::a;
	return 0;
}