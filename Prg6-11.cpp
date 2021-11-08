#include<iostream>

using namespace std;
int max(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}
int main() {
	int num1, num2;
	cout << "두개의 숫자를 입력하세요 : ";
	cin >> num1 >> num2;

	cout << "둘중 큰 숫자는" << max(num1,num2) << "입니다" << endl;
	return 0;
}