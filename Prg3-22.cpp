#include<iostream>
using namespace std;
int main() {
	int x ;
	cout << "�������� �Է��ϼ���: ";
	cin >> x;
	cout << "x�� 10���� ��: " << x << endl;
	cout << "x�� 8���� ��: " << oct << x << endl;
	cout << "x�� 16���� ��: " << hex << x << endl<< endl;

	cout << "x�� 10���� ��: " <<showbase<<dec<< x << endl;
	cout << "x�� 8���� ��: " <<showbase<< oct << x << endl;
	cout << "x�� 16���� ��: "<<showbase<< hex << x << endl << endl;
	bool a = 2;
	cout <<noshowbase <<boolalpha << a<<endl;
	return 0;
}