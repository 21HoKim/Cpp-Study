#include<iostream>
#include<cstring>
using namespace std;

int main() {

	char str1[100] = "Hello";
	char str2[] = "123456789";
	char* str3 = new char[100];
	char* cPtr;
	//cout << str1 << '\t' << str2 << endl;
	strcpy(str3, str1);
	cout << str1 << '\t' << str2 << '\t' << str3 << '\t' << endl;

	cout << "str1�� ���� : " << strlen(str1) << endl;
	cout << "input your's name : ";
	
	cin.getline(str3, 100); //�ܼ� ���� ����
	cout << "name is " << str3 << "." << endl;
	cout << str1 << endl;
	str1[3] = 'X';
	cout << str1 << endl;
	cPtr = strchr(str2, '5');
	cout << cPtr-str2 << endl; //-str2�� �ϸ� �ε����� �׳� cPtr�� 5���ͳ����� ���
	cPtr = strstr(str2, "45");
	cout << cPtr-str2 << endl;

	strcat(str1, str2); //�ΰ� ���̱�
	cout << str1 << endl;

	return 0;
}