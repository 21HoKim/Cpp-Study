#include<iostream>
using namespace std;
int main() {
	unsigned int num;
	cout << "0~6������ ���ڸ� �Է��ϼ��� : ";
	cin >> num;
	switch (num)
	{
	case 0: cout << "�Ͽ���\n"; break;
	case 1: cout << "������\n"; break;
	case 2: cout << "ȭ����\n"; break;
	case 3: cout << "������\n"; break;
	case 4: cout << "�����\n"; break;
	case 5: cout << "�ݿ���\n"; break;
	case 6: cout << "�����\n"; break;
	default:
		break;
	}
	return 0;
}