#include<iostream>
using namespace std;
int main() {
	unsigned int num;
	cout << "0~6사이의 숫자를 입력하세요 : ";
	cin >> num;
	switch (num)
	{
	case 0: cout << "일요일\n"; break;
	case 1: cout << "월요일\n"; break;
	case 2: cout << "화요일\n"; break;
	case 3: cout << "수요일\n"; break;
	case 4: cout << "목요일\n"; break;
	case 5: cout << "금요일\n"; break;
	case 6: cout << "토요일\n"; break;
	default:
		break;
	}
	return 0;
}